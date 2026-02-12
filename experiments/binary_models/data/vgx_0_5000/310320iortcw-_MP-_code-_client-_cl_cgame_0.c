qboolean CL_GetTag( int clientNum, char *tagname, orientation_t *or ) {
if ( !cgvm ) {
return qfalse;
}

if ( VM_IsNative( cgvm ) ) {
return VM_Call( cgvm, CG_GET_TAG, clientNum, tagname, or );
} else {
qboolean foundTag;
unsigned cgOr;
unsigned cgTagname;
int tagnameSize;

tagnameSize = strlen( tagname ) + 1;


cgOr = VM_GetTempMemory( cgvm, sizeof (orientation_t), or );
cgTagname = VM_GetTempMemory( cgvm, tagnameSize, tagname );

if ( !cgOr || !cgTagname ) {
Com_Printf("WARNING: CL_GetTag: Not enough cgame QVM memory (increase vm_minQvmHunkMegs cvar).\n");
return qfalse;
}

foundTag = VM_Call( cgvm, CG_GET_TAG, clientNum, cgTagname, cgOr );



VM_FreeTempMemory( cgvm, cgTagname, tagnameSize, NULL );
VM_FreeTempMemory( cgvm, cgOr, sizeof (orientation_t), or );

return foundTag;
}
}