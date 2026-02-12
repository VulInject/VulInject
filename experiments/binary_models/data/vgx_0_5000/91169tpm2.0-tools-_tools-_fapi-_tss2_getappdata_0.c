static int tss2_tool_onrun (FAPI_CONTEXT *fctx) {

if (!ctx.path) {
fprintf (stderr, "path is missing, use --path\n");
return -1;
}


uint8_t *appData;
size_t appDataSize;


TSS2_RC r = Fapi_GetAppData (fctx, ctx.path, &appData, &appDataSize);
if (r != TSS2_RC_SUCCESS) {
LOG_PERR ("Fapi_GetAppData", r);
return 1;
}


if (appData && ctx.data) {
r = open_write_and_close (ctx.data, ctx.overwrite, appData,
appDataSize);
if (r != TSS2_RC_SUCCESS) {
return 1;
}
}


Fapi_Free (appData);
return 0;
}