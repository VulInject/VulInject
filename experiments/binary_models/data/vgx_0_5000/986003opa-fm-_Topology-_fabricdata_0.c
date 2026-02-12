static FSTATUS CLListUint32Add(cl_qmap_t *arrayMap, uint32 entry) 
{ 
FSTATUS status = FSUCCESS; 
cl_map_item_t *mi; 
clListSearchData_t *clListp; 

if (CLListUint32Find(arrayMap, entry)) 
return status; 

clListp = (clListSearchData_t *)MemoryAllocate2AndClear(sizeof(clListSearchData_t), IBA_MEM_FLAG_PREMPTABLE, MYTAG);        
if (!clListp) {
status = FINSUFFICIENT_MEMORY; 
fprintf(stderr, "%s: Unable to allocate memory\n", g_Top_cmdname); 
} else {
mi = cl_qmap_insert(arrayMap, entry, &clListp->AllListEntry); 
if (mi != &clListp->AllListEntry) {
fprintf(stderr, "%s: Duplicate entry found in numeric list map: %d\n", g_Top_cmdname, entry); 
MemoryDeallocate(clListp); 
clListp = PARENT_STRUCT(mi, clListSearchData_t, AllListEntry);
}
}

return status;
}