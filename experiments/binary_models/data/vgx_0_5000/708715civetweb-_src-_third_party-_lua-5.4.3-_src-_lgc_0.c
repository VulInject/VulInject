static GCObject **sweeplist (lua_State *L, GCObject **p, int countin,
int *countout) {
global_State *g = G(L);
int ow = otherwhite(g);
int i;
int white = luaC_white(g);  
for (i = 0; *p != NULL && i < countin; i++) {
GCObject *curr = *p;
int marked = curr->marked;
if (isdeadm(ow, marked)) {  
*p = curr->next;  
freeobj(L, curr);  
}
else {  
curr->marked = cast_byte((marked & ~maskgcbits) | white);
p = &curr->next;  
}
}
if (countout)
*countout = i;  
return (*p == NULL) ? NULL : p;
}