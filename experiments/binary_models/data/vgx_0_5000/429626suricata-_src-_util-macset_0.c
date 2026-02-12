MacSet *MacSetInit(int size)
{
MacSet *ms = NULL;
if (!FLOW_CHECK_MEMCAP(sizeof(*ms))) {
return NULL;
}
ms = SCCalloc(1, sizeof(*ms));
if (unlikely(ms == NULL)) {
SCLogError("Unable to allocate MacSet memory");
return NULL;
}
(void) SC_ATOMIC_ADD(flow_memuse, (sizeof(*ms)));
ms->state[MAC_SET_SRC] = ms->state[MAC_SET_DST] = EMPTY_SET;
if (size < 3) {

size = 3;
}
ms->size = size;
ms->last[MAC_SET_SRC] = ms->last[MAC_SET_DST] = 0;
return ms;
}