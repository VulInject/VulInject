static int tss2_tool_onrun (FAPI_CONTEXT *fctx) {

if (!ctx.exportedData) {
fprintf (stderr, "exported data missing, use --output\n");
return -1;
}
if (!ctx.pathOfKeyToDuplicate) {
fprintf (stderr, "path of key to duplicate missing, use --path\n");
return -1;
}


char *exportedData;
TSS2_RC r = Fapi_ExportKey (fctx, ctx.pathOfKeyToDuplicate,
ctx.pathToPublicKeyOfNewParent, &exportedData);
if (r != TSS2_RC_SUCCESS) {
LOG_PERR ("Fapi_ExportKey", r);
return 1;
}


r = open_write_and_close (ctx.exportedData, ctx.overwrite, exportedData,
strlen(exportedData));
if (r){
Fapi_Free (exportedData);
return 1;
}

Fapi_Free (exportedData);
return 0;
}