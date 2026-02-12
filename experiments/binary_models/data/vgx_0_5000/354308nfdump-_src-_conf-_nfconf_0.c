int ConfGetExporter(char **ident, char **ip, char **flowdir) {
static toml_table_t *exporterList = NULL;
static int i = 0;

if (!nfconfFile.valid) return 0;

if (!exporterList) {
exporterList = toml_table_in(nfconfFile.sectionConf, "exporter");
if (!exporterList) {
RETURN_FAILED;
}
}


const char *exporterName = toml_key_in(exporterList, i);
if (!exporterName) {
i = 0;
*ident = NULL;
*ip = NULL;
*flowdir = NULL;
return 0;
}


toml_array_t *exporterArray = toml_array_in(exporterList, exporterName);
if (!exporterArray) {
RETURN_FAILED;
}

toml_datum_t ipData = toml_string_at(exporterArray, 0);
if (ipData.ok) {
*ip = strdup(ipData.u.s);
} else {
RETURN_FAILED;
}

toml_datum_t flowDirData = toml_string_at(exporterArray, 1);
if (flowDirData.ok) {
*flowdir = strdup(flowDirData.u.s);
} else {
RETURN_FAILED;
}
*ident = strdup(exporterName);
i++;
return i;

}  
