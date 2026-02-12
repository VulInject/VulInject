int msSLDGetGraphicSymbol(mapObj *map, char *pszFileName,  char* extGraphicName,
int nGap_ignored)
{
(void)nGap_ignored;
int nSymbolId = 0;
symbolObj *psSymbol = NULL;


if (map && pszFileName) {
if( (psSymbol = msGrowSymbolSet(&(map->symbolset))) == NULL)
return 0; 
nSymbolId = map->symbolset.numsymbols;
map->symbolset.numsymbols++;
initSymbol(psSymbol);
psSymbol->inmapfile = MS_TRUE;
psSymbol->type = MS_SYMBOL_PIXMAP;
psSymbol->name = msStrdup(extGraphicName);
psSymbol->imagepath = msStrdup(pszFileName);
psSymbol->full_pixmap_path = msStrdup(pszFileName);
}
return nSymbolId;
}