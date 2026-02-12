int Export_BotLibLoadMap(const char *mapname)
{
int starttime = Sys_MilliSeconds();
int errnum;

if (!BotLibSetup("BotLoadMap")) return BLERR_LIBRARYNOTSETUP;

botimport.Print(PRT_MESSAGE, "------------ Map Loading ------------\n");

errnum = AAS_LoadMap(mapname);
if (errnum != BLERR_NOERROR) return errnum;

BotInitLevelItems();		
BotSetBrushModelTypes();	

botimport.Print(PRT_MESSAGE, "-------------------------------------\n");
botimport.Print(PRT_MESSAGE, "map loaded in %d msec\n", Sys_MilliSeconds() - starttime);

return BLERR_NOERROR;
} 
