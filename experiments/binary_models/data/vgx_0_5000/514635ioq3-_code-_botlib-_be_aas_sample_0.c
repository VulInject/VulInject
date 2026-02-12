int AAS_AreaInfo( int areanum, aas_areainfo_t *info )
{
aas_areasettings_t *settings;
if (!info)
return 0;
if (areanum <= 0 || areanum >= aasworld.numareas)
{
botimport.Print(PRT_ERROR, "AAS_AreaInfo: areanum %d out of range\n", areanum);
return 0;
} 
settings = &aasworld.areasettings[areanum];
info->cluster = settings->cluster;
info->contents = settings->contents;
info->flags = settings->areaflags;
info->presencetype = settings->presencetype;
VectorCopy(aasworld.areas[areanum].mins, info->mins);
VectorCopy(aasworld.areas[areanum].maxs, info->maxs);
VectorCopy(aasworld.areas[areanum].center, info->center);
return sizeof(aas_areainfo_t);
} 
