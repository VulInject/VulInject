
#include "xinclude.h"



#define NON_UNIQUE ULONG_MAX


struct hashmap {
	int nr, alloc;
	struct entry {
		unsigned int hash;
		
		unsigned int line1, line2;
		
		struct entry *next, *previous;

		
		unsigned anchor : 1;
	} *entries, *first, *last;
	
	unsigned int has_matches;
	xdfenv_t *env;
	xpparam_t const *xpp;
};

static int is_anchor(xpparam_t const *xpp, const char *line)
{
	int i;
	for (i = 0; i < (int)xpp->anchors_nr; i++) {
		if (!strncmp(line, xpp->anchors[i], strlen(xpp->anchors[i])))
			return 1;
	}
	return 0;
}


static void insert_record(xpparam_t const *xpp, int line, struct hashmap *map,
			  int pass)
{
	xrecord_t **records = pass == 1 ?
		map->env->xdf1.recs : map->env->xdf2.recs;
	xrecord_t *record = records[line - 1];
	
	int index = (int)((record->ha << 1) % map->alloc);

	while (map->entries[index].line1) {
		if (map->entries[index].hash != record->ha) {
			if (++index >= map->alloc)
				index = 0;
			continue;
		}
		if (pass == 2)
			map->has_matches = 1;
		if (pass == 1 || map->entries[index].line2)
			map->entries[index].line2 = NON_UNIQUE;
		else
			map->entries[index].line2 = line;
		return;
	}
	if (pass == 2)
		return;
	map->entries[index].line1 = line;
	map->entries[index].hash = record->ha;
	map->entries[index].anchor = is_anchor(xpp, map->env->xdf1.recs[line - 1]->ptr);
	if (!map->first)
		map->first = map->entries + index;
	if (map->last) {
		map->last->next = map->entries + index;
		map->entries[index].previous = map->last;
	}
	map->last = map->entries + index;
	map->nr++;
}


static int fill_hashmap(xpparam_t const *xpp, xdfenv_t *env,
		struct hashmap *result,
		int line1, int count1, int line2, int count2)
{
	result->xpp = xpp;
	result->env = env;

	
	result->alloc = count1 * 2;
	if (!XDL_CALLOC_ARRAY(result->entries, result->alloc))
		return -1;

	
	while (count1--)
		insert_record(xpp, line1++, result, 1);

	
	while (count2--)
		insert_record(xpp, line2++, result, 2);

	return 0;
}


static int binary_search(struct entry **sequence, int longest,
		struct entry *entry)
{
	int left = -1, right = longest;

	while (left + 1 < right) {
		int middle = left + (right - left) / 2;
		
		if (sequence[middle]->line2 > entry->line2)
			right = middle;
		else
			left = middle;
	}
	
	return left;
}


static int find_longest_common_sequence(struct hashmap *map, struct entry **res)
{
	struct entry **sequence;
	int longest = 0, i;
	struct entry *entry;

	
	int anchor_i = -1;

	if (!XDL_ALLOC_ARRAY(sequence, map->nr))
		return -1;

	for (entry = map->first; entry; entry = entry->next) {
		if (!entry->line2 || entry->line2 == NON_UNIQUE)
			continue;
		i = binary_search(sequence, longest, entry);
		entry->previous = i < 0 ? NULL : sequence[i];
		++i;
		if (i <= anchor_i)
			continue;
		sequence[i] = entry;
		if (entry->anchor) {
			anchor_i = i;
			longest = anchor_i + 1;
		} else if (i == longest) {
			longest++;
		}
	}

	
	if (!longest) {
		*res = NULL;
		xdl_free(sequence);
		return 0;
	}

	
	entry = sequence[longest - 1];
	entry->next = NULL;
	while (entry->previous) {
		entry->previous->next = entry;
		entry = entry->previous;
	}
	*res = entry;
	xdl_free(sequence);
	return 0;
}

static int match(struct hashmap *map, int line1, int line2)
{
	xrecord_t *record1 = map->env->xdf1.recs[line1 - 1];
	xrecord_t *record2 = map->env->xdf2.recs[line2 - 1];
	return record1->ha == record2->ha;
}

static int patience_diff(xpparam_t const *xpp, xdfenv_t *env,
		int line1, int count1, int line2, int count2);

static int walk_common_sequence(struct hashmap *map, struct entry *first,
		int line1, int count1, int line2, int count2)
{
	int end1 = line1 + count1, end2 = line2 + count2;
	int next1, next2;

	for (;;) {
		
		if (first) {
			next1 = first->line1;
			next2 = first->line2;
			while (next1 > line1 && next2 > line2 &&
					match(map, next1 - 1, next2 - 1)) {
				next1--;
				next2--;
			}
		} else {
			next1 = end1;
			next2 = end2;
		}
		while (line1 < next1 && line2 < next2 &&
				match(map, line1, line2)) {
			line1++;
			line2++;
		}

		
		if (next1 > line1 || next2 > line2) {
			if (patience_diff(map->xpp, map->env,
					line1, next1 - line1,
					line2, next2 - line2))
				return -1;
		}

		if (!first)
			return 0;

		while (first->next &&
				first->next->line1 == first->line1 + 1 &&
				first->next->line2 == first->line2 + 1)
			first = first->next;

		line1 = first->line1 + 1;
		line2 = first->line2 + 1;

		first = first->next;
	}
}

static int fall_back_to_classic_diff(struct hashmap *map,
		int line1, int count1, int line2, int count2)
{
	xpparam_t xpp;

	memset(&xpp, 0, sizeof(xpp));
	xpp.flags = map->xpp->flags & ~XDF_DIFF_ALGORITHM_MASK;

	return xdl_fall_back_diff(map->env, &xpp,
				  line1, count1, line2, count2);
}


static int patience_diff(xpparam_t const *xpp, xdfenv_t *env,
		int line1, int count1, int line2, int count2)
{
	struct hashmap map;
	struct entry *first;
	int result = 0;

	
	if (!count1) {
		while(count2--)
			env->xdf2.rchg[line2++ - 1] = 1;
		return 0;
	} else if (!count2) {
		while(count1--)
			env->xdf1.rchg[line1++ - 1] = 1;
		return 0;
	}

	memset(&map, 0, sizeof(map));
	if (fill_hashmap(xpp, env, &map,
			line1, count1, line2, count2))
		return -1;

	
	if (!map.has_matches) {
		while(count1--)
			env->xdf1.rchg[line1++ - 1] = 1;
		while(count2--)
			env->xdf2.rchg[line2++ - 1] = 1;
		xdl_free(map.entries);
		return 0;
	}

	result = find_longest_common_sequence(&map, &first);
	if (result)
		goto out;
	if (first)
		result = walk_common_sequence(&map, first,
			line1, count1, line2, count2);
	else
		result = fall_back_to_classic_diff(&map,
			line1, count1, line2, count2);
 out:
	xdl_free(map.entries);
	return result;
}

int xdl_do_patience_diff(xpparam_t const *xpp, xdfenv_t *env)
{
	return patience_diff(xpp, env, 1, env->xdf1.nrec, 1, env->xdf2.nrec);
}
