void bitset_info_log(bitset_t* bitset, char* prelude) {
char*	string = NULL;
char*	s = NULL;
int		first = 1;
int		range = 0;
int		range_start = -1;
int		prev = -1;
int		bit = -1;
size_t	max_str_len = bitset->nset_m*5+1;
int		res = 0;
Status_t	status;

if (!bitset) return;

if (bitset->bits_m == NULL) {
IB_LOG_INFINI_INFO_FMT( __func__, "NOBITS");
return;
}

if (bitset->nset_m == 0) {
if (prelude) {
IB_LOG_INFINI_INFO_FMT(__func__, "%s <nil>", prelude);
} else {
IB_LOG_INFINI_INFO_FMT(__func__, "<nil>");
}
return;

} else if (!bitset->pool_m || (bitset->nset_m>500)) {
if (prelude) {
IB_LOG_INFINI_INFO_FMT(__func__, "%s, nset= %d", prelude, (int)bitset->nset_m);
} else {
IB_LOG_INFINI_INFO_FMT(__func__, "nset= %d", (int)bitset->nset_m);
}
return;
}

status = vs_pool_alloc(bitset->pool_m, max_str_len, (void *)&string);
if (status != VSTATUS_OK) {
if (prelude) {
IB_LOG_INFINI_INFO_FMT(__func__, "%s, nset= %d", prelude, (int)bitset->nset_m);
} else {
IB_LOG_INFINI_INFO_FMT(__func__, "nset= %d", (int)bitset->nset_m);
}
return;
}
string[0] = '\0';
s = string;

bit = bitset_find_first_one(bitset);

while (bit != -1) {
if (first) {
res = cs_snprintfcat(&s, &max_str_len, "%d", bit);
if (res == 0)
break;
else if (res < 0)
goto bail;

first = 0;
} else {
if (range && (prev != bit-1)) {
range = 0;
if ((prev - range_start) > 1) {
res = cs_snprintfcat(&s, &max_str_len, "-%d,%d", prev, bit);
} else {
res = cs_snprintfcat(&s, &max_str_len, ",%d,%d", prev, bit);
}
if (res == 0)
break;
else if (res < 0)
goto bail;

prev = -1;
range_start = -1;
} else if (!range && (prev == bit-1)) {
range_start = prev;
range = 1;
} else if (!range) {
res = cs_snprintfcat(&s, &max_str_len, ",%d", bit);
if (res == 0)
break;
else if (res < 0)
goto bail;
}
}
prev = bit;
bit = bitset_find_next_one(bitset, bit+1);
}

if (range && (prev != -1)) {
if ((prev - range_start) > 1) {
res = cs_snprintfcat(&s, &max_str_len, "-%d", prev);
} else {
res = cs_snprintfcat(&s, &max_str_len, ",%d", prev);
}
if (res < 0)
goto bail;
}

bail:  
if (prelude) {
IB_LOG_INFINI_INFO_FMT(__func__, "%s %s", prelude, string);
} else {
IB_LOG_INFINI_INFO_FMT(__func__, "%s", string);
}

if ((status = vs_pool_free(bitset->pool_m, string)) != VSTATUS_OK) {
IB_LOG_ERRORRC("can't free allocated space for bitset log, rc:", status);
}
}