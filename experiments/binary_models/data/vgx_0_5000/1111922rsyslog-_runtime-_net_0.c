static rsRetVal AddAllowedSenderEntry(struct AllowedSenders **ppRoot, struct AllowedSenders **ppLast,
struct NetAddr *iAllow, uint8_t iSignificantBits)
{
struct AllowedSenders *pEntry = NULL;

assert(ppRoot != NULL);
assert(ppLast != NULL);
assert(iAllow != NULL);

if((pEntry = (struct AllowedSenders*) calloc(1, sizeof(struct AllowedSenders))) == NULL) {
return RS_RET_OUT_OF_MEMORY; 
}

memcpy(&(pEntry->allowedSender), iAllow, sizeof (struct NetAddr));
pEntry->pNext = NULL;
pEntry->SignificantBits = iSignificantBits;


if(*ppRoot == NULL) {
*ppRoot = pEntry;
} else {
(*ppLast)->pNext = pEntry;
}
*ppLast = pEntry;

return RS_RET_OK;
}