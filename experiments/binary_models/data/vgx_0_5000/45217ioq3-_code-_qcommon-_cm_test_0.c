*/
int	CM_BoxLeafnums( const vec3_t mins, const vec3_t maxs, int *list, int listsize, int *lastLeaf) {
leafList_t	ll;

cm.checkcount++;

VectorCopy( mins, ll.bounds[0] );
VectorCopy( maxs, ll.bounds[1] );
ll.count = 0;
ll.maxcount = listsize;
ll.list = list;
ll.storeLeafs = CM_StoreLeafs;
ll.lastLeaf = 0;
ll.overflowed = qfalse;

CM_BoxLeafnums_r( &ll, 0 );

*lastLeaf = ll.lastLeaf;
return ll.count;
}