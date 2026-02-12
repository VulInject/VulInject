int r_bin_pdb_download(RCore *core, PJ *pj, int isradjson, SPDBOptions *options) {
int ret;
SPDBDownloaderOpt opt;
SPDBDownloader pdb_downloader;
RBinInfo *info = r_bin_get_info (core->bin);

if (!info || !info->debug_file_name) {
R_LOG_ERROR ("Can't find debug filename");
return 1;
}

if (!is_valid_guid (info->guid)) {
R_LOG_ERROR ("Invalid GUID for file");
return 1;
}

if (!options || !options->symbol_server || !options->user_agent) {
R_LOG_ERROR ("Can't retrieve pdb configurations");
return 1;
}

opt.dbg_file = (char*) r_file_basename (info->debug_file_name);
opt.guid = info->guid;
opt.symbol_server = options->symbol_server;
opt.user_agent = options->user_agent;
opt.symbol_store_path = options->symbol_store_path;
opt.extract = options->extract;

init_pdb_downloader (&opt, &pdb_downloader);
ret = pdb_downloader.download? pdb_downloader.download (&pdb_downloader): 0;
if (isradjson) {
pj_ko (pj, "pdb");
pj_ks (pj, "file", opt.dbg_file);
pj_kb (pj, "download", (bool) ret);
pj_end (pj);
} else {
r_cons_printf ("PDB \"%s\" download %s\n",
opt.dbg_file, ret? "success": "failed");
}
deinit_pdb_downloader (&pdb_downloader);

return !ret;
}