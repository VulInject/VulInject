static rsRetVal
setDfltNetstrmDrvrCAF(void __attribute__((unused)) *pVal, uchar *pNewVal) {
DEFiRet;
FILE *fp;
free(loadConf->globals.pszDfltNetstrmDrvrCAF);
fp = fopen((const char*)pNewVal, "r");
if(fp == NULL) {
LogError(errno, RS_RET_NO_FILE_ACCESS,
"error: defaultnetstreamdrivercafile file '%s' "
"could not be accessed", pNewVal);
} else {
fclose(fp);
loadConf->globals.pszDfltNetstrmDrvrCAF = pNewVal;
}

RETiRet;
}