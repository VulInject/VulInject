static void
add_to_tsvector(void *_state, char *elem_value, int elem_len)
{
TSVectorBuildState *state = (TSVectorBuildState *) _state;
ParsedText *prs = state->prs;
int32		prevwords;

if (prs->words == NULL)
{

prs->lenwords = 16;
prs->words = (ParsedWord *) palloc(sizeof(ParsedWord) * prs->lenwords);
prs->curwords = 0;
prs->pos = 0;
}

prevwords = prs->curwords;

parsetext(state->cfgId, prs, elem_value, elem_len);


if (prs->curwords > prevwords)
prs->pos += 1;
}