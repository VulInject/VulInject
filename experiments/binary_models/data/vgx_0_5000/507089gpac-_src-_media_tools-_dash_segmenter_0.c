static GF_Err gf_dasher_setup(GF_DASHSegmenter *dasher)
{
GF_Err e;
u32 i, count;
char *sep_ext, *o_sep_ext=NULL;
char *args=NULL, szArg[1024];
Bool multi_period = GF_FALSE;
Bool use_filter_chains = GF_FALSE;

if (!dasher->mpd_name) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Missing MPD name\n"));
return GF_OUT_OF_MEM;
}

dasher->fsess = gf_fs_new_defaults(0);

if (!gf_sys_is_test_mode() && (gf_log_get_tool_level(GF_LOG_APP)!=GF_LOG_QUIET) && !gf_sys_is_quiet() ) {
gf_fs_enable_reporting(dasher->fsess, GF_TRUE);
gf_fs_set_ui_callback(dasher->fsess, on_dasher_event, dasher);
}

if (!dasher->fsess) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to create filter session\n"));
return GF_OUT_OF_MEM;
}


sep_ext = strstr(dasher->mpd_name, ":gpac:");
if (sep_ext) {
sep_ext[0] = 0;
o_sep_ext = sep_ext;
sep_ext+=5;
} else {
sep_ext = gf_url_colon_suffix(dasher->mpd_name, '=');
if (sep_ext) {
if (sep_ext[1] == '\\') sep_ext = strchr(sep_ext+1, ':');
else if (sep_ext[1]=='/') {
sep_ext = strchr(sep_ext+1, '/');
if (sep_ext) sep_ext = strchr(sep_ext, ':');
}
}
if (sep_ext) {
sep_ext[0] = 0;
o_sep_ext = sep_ext;
}
}

if (dasher->segment_duration == (u32) dasher->segment_duration) {
sprintf(szArg, "segdur=%u/%u", (u32) dasher->segment_duration, dasher->dash_scale);
} else {
sprintf(szArg, "segdur=%g", dasher->segment_duration/dasher->dash_scale);
}
e = gf_dynstrcat(&args, szArg, ":");

if (sep_ext)
e |= gf_dynstrcat(&args, sep_ext+1, ":");

if (dasher->single_segment) e |= gf_dynstrcat(&args, "sseg", ":");
if (dasher->single_file) e |= gf_dynstrcat(&args, "sfile", ":");
if (dasher->use_url_template) e |= gf_dynstrcat(&args, "tpl", ":");
if (dasher->use_segment_timeline) e |= gf_dynstrcat(&args, "stl", ":");
if (dasher->dash_mode) {
e |= gf_dynstrcat(&args, (dasher->dash_mode == GF_DASH_DYNAMIC_LAST) ? "dynlast" : "dynamic", ":");

e |= gf_dynstrcat(&args, "reschedule", ":");
}
if (dasher->disable_segment_alignment) e |= gf_dynstrcat(&args, "!align", ":");
if (dasher->enable_mix_codecs) e |= gf_dynstrcat(&args, "mix_codecs", ":");
if (dasher->insert_utc) e |= gf_dynstrcat(&args, "ntp=yes", ":");
if (dasher->enable_sar_mix) e |= gf_dynstrcat(&args, "no_sar", ":");

switch (dasher->bitstream_switching_mode) {
case GF_DASH_BSMODE_DEFAULT:
break;
case GF_DASH_BSMODE_NONE:
e |= gf_dynstrcat(&args, "bs_switch=off", ":");
break;
case GF_DASH_BSMODE_INBAND:
e |= gf_dynstrcat(&args, "bs_switch=inband", ":");
break;
case GF_DASH_BSMODE_INBAND_PPS:
e |= gf_dynstrcat(&args, "bs_switch=pps", ":");
break;
case GF_DASH_BSMODE_BOTH:
e |= gf_dynstrcat(&args, "bs_switch=both", ":");
break;
case GF_DASH_BSMODE_MERGED:
e |= gf_dynstrcat(&args, "bs_switch=on", ":");
break;
case GF_DASH_BSMODE_MULTIPLE_ENTRIES:
e |= gf_dynstrcat(&args, "bs_switch=multi", ":");
break;
case GF_DASH_BSMODE_SINGLE:
e |= gf_dynstrcat(&args, "bs_switch=force", ":");
break;
}

if (dasher->seg_rad_name) {
sprintf(szArg, "template=%s", dasher->seg_rad_name);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->seg_ext) {
sprintf(szArg, "segext=%s", dasher->seg_ext);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->seg_init_ext) {
sprintf(szArg, "initext=%s", dasher->seg_init_ext);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->ast_offset_ms) {
sprintf(szArg, "asto=%d", -dasher->ast_offset_ms);
e |= gf_dynstrcat(&args, szArg, ":");
}
switch (dasher->profile) {
case GF_DASH_PROFILE_AUTO:
break;
case GF_DASH_PROFILE_LIVE:
e |= gf_dynstrcat(&args, "profile=live", ":");
break;
case GF_DASH_PROFILE_ONDEMAND:
e |= gf_dynstrcat(&args, "profile=onDemand", ":");
break;
case GF_DASH_PROFILE_MAIN:
e |= gf_dynstrcat(&args, "profile=main", ":");
break;
case GF_DASH_PROFILE_FULL:
e |= gf_dynstrcat(&args, "profile=full", ":");
if (!dasher->segments_start_with_rap) e |= gf_dynstrcat(&args, "!sap", ":");
break;
case GF_DASH_PROFILE_HBBTV_1_5_ISOBMF_LIVE:
e |= gf_dynstrcat(&args, "profile=hbbtv1.5.live", ":");
break;
case GF_DASH_PROFILE_AVC264_LIVE:
e |= gf_dynstrcat(&args, "profile=dashavc264.live", ":");
break;
case GF_DASH_PROFILE_AVC264_ONDEMAND:
e |= gf_dynstrcat(&args, "profile=dashavc264.onDemand", ":");
break;
case GF_DASH_PROFILE_DASHIF_LL:
e |= gf_dynstrcat(&args, "profile=dashif.ll", ":");
break;
}
if (dasher->cp_location_mode==GF_DASH_CPMODE_REPRESENTATION) e |= gf_dynstrcat(&args, "cp=rep", ":");
else if (dasher->cp_location_mode==GF_DASH_CPMODE_BOTH) e |= gf_dynstrcat(&args, "cp=both", ":");

if (dasher->min_buffer_time) {
sprintf(szArg, "buf=%d", dasher->min_buffer_time);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->dash_scale != 1000) {
sprintf(szArg, "timescale=%d", dasher->dash_scale);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (!dasher->check_duration) e |= gf_dynstrcat(&args, "!check_dur", ":");




if (dasher->dash_mode >= GF_DASH_DYNAMIC) {
if (dasher->time_shift_depth<0) e |= gf_dynstrcat(&args, "tsb=-1", ":");
else {
sprintf(szArg, "tsb=%u", (u32) dasher->time_shift_depth);
e |= gf_dynstrcat(&args, szArg, ":");
}

if (dasher->utc_start_date) {
sprintf(szArg, "ast=%s", dasher->utc_start_date);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->mpd_update_time) {
sprintf(szArg, "refresh=%g", dasher->mpd_update_time);
e |= gf_dynstrcat(&args, szArg, ":");
}
else {
sprintf(szArg, "refresh=-%g", dasher->mpd_live_duration);
e |= gf_dynstrcat(&args, szArg, ":");
}
}
if (dasher->sub_duration) {

sprintf(szArg, "subdur=%g", dasher->sub_duration/dasher->dash_scale);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->dash_state) {
sprintf(szArg, "state=%s", dasher->dash_state);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (! dasher->disable_loop && dasher->dash_state) e |= gf_dynstrcat(&args, "loop", ":");
if (dasher->hls_clock) e |= gf_dynstrcat(&args, "hlsc", ":");



if (dasher->dash_mode>=GF_DASH_DYNAMIC) {
sprintf(szArg, "_p_gentime=%p", &dasher->next_gen_ntp_ms);
e |= gf_dynstrcat(&args, szArg, ":");
sprintf(szArg, "_p_mpdtime=%p", &dasher->mpd_time_ms);
e |= gf_dynstrcat(&args, szArg, ":");
}


if (dasher->fragment_duration) {
Double diff = dasher->fragment_duration;
diff -= dasher->segment_duration;
if (diff<0) diff = -diff;
if (diff > 0.01) {
if (dasher->fragment_duration == (u32) dasher->fragment_duration) {
sprintf(szArg, "cdur=%u/%u", (u32) dasher->fragment_duration, dasher->dash_scale);
} else {
sprintf(szArg, "cdur=%g", dasher->fragment_duration/dasher->dash_scale);
}
e |= gf_dynstrcat(&args, szArg, ":");
}
}
if (dasher->segment_marker_4cc) {
sprintf(szArg, "m4cc=%s", gf_4cc_to_str(dasher->segment_marker_4cc) );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->daisy_chain_sidx) e |= gf_dynstrcat(&args, "chain_sidx", ":");
if (dasher->use_ssix) e |= gf_dynstrcat(&args, "ssix", ":");
if (dasher->initial_moof_sn) {
sprintf(szArg, "msn=%d", dasher->initial_moof_sn );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->initial_tfdt) {
sprintf(szArg, "tfdt="LLU"", dasher->initial_tfdt );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->no_fragments_defaults) e |= gf_dynstrcat(&args, "nofragdef", ":");
if (dasher->single_traf_per_moof) e |= gf_dynstrcat(&args, "straf", ":");
if (dasher->single_trun_per_traf) e |= gf_dynstrcat(&args, "strun", ":");
switch (dasher->pssh_mode) {
case GF_DASH_PSSH_MOOV:
e |= gf_dynstrcat(&args, "pssh=v", ":");
break;
case GF_DASH_PSSH_MOOV_MPD:
e |= gf_dynstrcat(&args, "pssh=mv", ":");
break;
case GF_DASH_PSSH_MOOF:
e |= gf_dynstrcat(&args, "pssh=f", ":");
break;
case GF_DASH_PSSH_MOOF_MPD:
e |= gf_dynstrcat(&args, "pssh=mf", ":");
break;
case GF_DASH_PSSH_MPD:
e |= gf_dynstrcat(&args, "pssh=m", ":");
break;
case GF_DASH_PSSH_NONE:
e |= gf_dynstrcat(&args, "pssh=n", ":");
break;
}


if (dasher->samplegroups_in_traf) e |= gf_dynstrcat(&args, "sgpd_traf", ":");
if (dasher->enable_sidx) {
sprintf(szArg, "subs_sidx=%d", dasher->subsegs_per_sidx );
e |= gf_dynstrcat(&args, szArg, ":");
}

if (dasher->fragments_start_with_rap) e |= gf_dynstrcat(&args, "sfrag", ":");

if (dasher->cues_file) {
sprintf(szArg, "cues=%s", dasher->cues_file );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (dasher->strict_cues) e |= gf_dynstrcat(&args, "strict_cues", ":");

if (dasher->mvex_after_traks) e |= gf_dynstrcat(&args, "mvex", ":");
if (dasher->sdtp_in_traf==1) e |= gf_dynstrcat(&args, "sdtp_traf=sdtp", ":");
else if (dasher->sdtp_in_traf==2) e |= gf_dynstrcat(&args, "sdtp_traf=both", ":");

if (dasher->split_mode==GF_DASH_SPLIT_CLOSEST)
e |= gf_dynstrcat(&args, "sbound=closest", ":");
else if (dasher->split_mode==GF_DASH_SPLIT_IN)
e |= gf_dynstrcat(&args, "sbound=in", ":");

if (dasher->merge_last_seg)
e |= gf_dynstrcat(&args, "last_seg_merge", ":");

if (dasher->keep_utc)
e |= gf_dynstrcat(&args, "keep_utc", ":");


if (dasher->dash_profile_extension) {
sprintf(szArg, "profX=%s", dasher->dash_profile_extension);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->title) {
sprintf(szArg, "title=%s", dasher->title);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->sourceInfo) {
sprintf(szArg, "source=%s", dasher->sourceInfo);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->moreInfoURL) {
sprintf(szArg, "info=%s", dasher->moreInfoURL);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->copyright) {
sprintf(szArg, "cprt=%s", dasher->copyright);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->lang) {
sprintf(szArg, "lang=%s", dasher->lang);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->locations) {
sprintf(szArg, "location=%s", dasher->locations);
e |= gf_dynstrcat(&args, szArg, "::");
}
if (dasher->base_urls) {
sprintf(szArg, "base=%s", dasher->base_urls);
e |= gf_dynstrcat(&args, szArg, "::");
}

dasher->dash_mode_changed = GF_FALSE;
GF_LOG(GF_LOG_DEBUG, GF_LOG_DASH, ("[DASH] Instantiating dasher filter for dst %s with args %s\n", dasher->mpd_name, args));

if (e) {
if (args) gf_free(args);
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to setup DASH filter arguments\n"));
return e;
}
dasher->output = gf_fs_load_destination(dasher->fsess, dasher->mpd_name, args, NULL, &e);

if (args) gf_free(args);

if (o_sep_ext) {
o_sep_ext[0] = ':';
}

if (!dasher->output) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to load DASH filter\n"));
return e;
}


count = gf_list_count(dasher->inputs);

for (i=0; i<count; i++) {
GF_DashSegmenterInput *di = gf_list_get(dasher->inputs, i);
if (di->periodID || (di->period_duration.num && di->period_duration.den) || di->xlink) {
multi_period = GF_TRUE;
}
di->period_order=0;
}
if (multi_period) {
u32 cur_period_order = 1;
for (i=0; i<count; i++) {
u32 j;
GF_DashSegmenterInput *a_di = NULL;
GF_DashSegmenterInput *di = gf_list_get(dasher->inputs, i);
if (!di->periodID) {
di->period_order = 0;
continue;
}
for (j=0; j<count; j++) {
a_di = gf_list_get(dasher->inputs, j);
if ((a_di != di) && a_di->periodID && !strcmp(a_di->periodID, di->periodID))
break;
a_di = NULL;
}
if (a_di) {
di->period_order = a_di->period_order;
continue;
}
di->period_order = cur_period_order;
cur_period_order++;
}
}
for (i=0; i<count; i++) {
GF_DashSegmenterInput *di = gf_list_get(dasher->inputs, i);
if (di->filter_chain) {
use_filter_chains = GF_TRUE;
break;
}
}

for (i=0; i<count; i++) {
u32 j;
char szSourceID[100];
GF_Filter *src = NULL;
GF_Filter *rt = NULL;
const char *url = NULL;
char *frag=NULL;
GF_DashSegmenterInput *di = gf_list_get(dasher->inputs, i);

if (dasher->real_time) {
rt = gf_fs_load_filter(dasher->fsess, "reframer:rt=sync", NULL);
}
if (di->file_name && strlen(di->file_name) && stricmp(di->file_name, "null") )
url = di->file_name;

if (url) {
frag = strrchr(di->file_name, '#');
if (frag) frag[0] = 0;
}

args = NULL;

e = gf_dynstrcat(&args, "smode=splitx", ":");

szSourceID[0] = 0;
if (frag) {
char *frag_val;
u32 fID = 0;
if (!strncmp(frag+1, "trackID=", 8)) frag_val = frag + 9;
else frag_val = frag + 1;

if (sscanf(frag_val, "%u", &fID)!=1)
fID=0;

if (fID) {
sprintf(szSourceID, "PID=%s", frag_val);
}

else {
sprintf(szSourceID, "%s", frag_val);
}

sprintf(szArg, "tkid=%s", frag_val);
e |= gf_dynstrcat(&args, szArg, ":");
} else if (di->track_id) {
sprintf(szSourceID, "PID=%d", di->track_id);

sprintf(szArg, "tkid=%d", di->track_id);
e |= gf_dynstrcat(&args, szArg, ":");
}

if (di->source_opts) {
e |= gf_dynstrcat(&args, di->source_opts, ":");
}


if (!use_filter_chains && di->representationID && strcmp(di->representationID, "NULL")) {
sprintf(szArg, "#Representation=%s", di->representationID );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (di->periodID) {
sprintf(szArg, "#Period=%s", di->periodID );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (di->asID)  {
sprintf(szArg, "#ASID=%d", di->asID );
e |= gf_dynstrcat(&args, szArg, ":");
}

if (multi_period && di->period_order) {
sprintf(szArg, "#PStart=-%d", di->period_order);
e |= gf_dynstrcat(&args, szArg, ":");
}

if (di->period_duration.num && di->period_duration.den) {
if (di->period_duration.den==1)
sprintf(szArg, "#PDur=%d", di->period_duration.num );
else
sprintf(szArg, "#PDur=%d/%u", di->period_duration.num, di->period_duration.den );
e |= gf_dynstrcat(&args, szArg, ":");
}

if (di->dash_duration.num && di->dash_duration.den) {
if (di->dash_duration.den==1)
sprintf(szArg, "#DashDur=%d", di->dash_duration.num );
else
sprintf(szArg, "#DashDur=%d/%u", di->dash_duration.num, di->dash_duration.den);
e |= gf_dynstrcat(&args, szArg, ":");
}
if (url && di->media_duration.num && di->media_duration.den) {
sprintf(szArg, "#ClampDur="LLU"/"LLD"", di->media_duration.num, di->media_duration.den );
e |= gf_dynstrcat(&args, szArg, ":");
}

if (di->xlink) {
sprintf(szArg, "#xlink=%s", di->xlink );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (di->bandwidth)  {
sprintf(szArg, "#Bitrate=%d", di->bandwidth );
e |= gf_dynstrcat(&args, szArg, ":");
sprintf(szArg, "#Maxrate=%d", di->bandwidth );
e |= gf_dynstrcat(&args, szArg, ":");
}

for (j=0;j<di->nb_baseURL; j++) {
if (!j) {
sprintf(szArg, "#BUrl=%s", di->baseURL[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->baseURL[j], ",");
}
}
for (j=0;j<di->nb_roles; j++) {
if (!j) {
sprintf(szArg, "#Role=%s", di->roles[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->roles[j], ",");
}
}

for (j=0;j<di->nb_rep_descs; j++) {
if (!j) {
sprintf(szArg, "#RDesc=%s", di->rep_descs[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->rep_descs[j], ",");
}
}

for (j=0;j<di->nb_p_descs; j++) {
if (!j) {
sprintf(szArg, "#PDesc=%s", di->p_descs[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->p_descs[j], ",");
}
}

for (j=0;j<di->nb_as_descs; j++) {
if (!j) {
sprintf(szArg, "#ASDesc=%s", di->as_descs[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->as_descs[j], ",");
}
}

for (j=0;j<di->nb_as_c_descs; j++) {
if (!j) {
sprintf(szArg, "#ASCDesc=%s", di->as_c_descs[j] );
e |= gf_dynstrcat(&args, szArg, ":");
} else {
e |= gf_dynstrcat(&args, di->as_c_descs[j], ",");
}
}

if (di->startNumber) {
sprintf(szArg, "#StartNumber=%d", di->startNumber );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (di->seg_template) {
sprintf(szArg, "#Template=%s", di->seg_template );
e |= gf_dynstrcat(&args, szArg, ":");
}
if (di->hls_pl) {
sprintf(szArg, "#HLSPL=%s", di->hls_pl );
e |= gf_dynstrcat(&args, szArg, ":");
}

if (di->sscale) e |= gf_dynstrcat(&args, "#SingleScale=true", ":");

if (e) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to setup source arguments for %s\n", di->file_name));
if (frag) frag[0] = '#';
if (args) gf_free(args);
return e;
}

if (!url) url = "null";
GF_LOG(GF_LOG_DEBUG, GF_LOG_DASH, ("[DASH] Instantiating dasher source %s with args %s\n", url, args));
src = gf_fs_load_source(dasher->fsess, url, args, NULL, &e);
if (args) gf_free(args);
if (frag) frag[0] = '#';

if (!src) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to load source filter for %s\n", di->file_name));
return e;
}

if (rt) {
gf_filter_set_source(rt, src, NULL);
src = rt;
}

if (!di->filter_chain) {

gf_filter_set_source(dasher->output, src, szSourceID[0] ? szSourceID : NULL);
continue;
}



GF_Filter *prev_filter=src;
char *fargs = (char *) di->filter_chain;
char *sep1 = strstr(fargs, "@@");
char *sep2 = strstr(fargs, "@");
Bool old_syntax = GF_FALSE;
if (sep1 && sep2 && (sep1==sep2))
old_syntax = GF_TRUE;

while (fargs) {
GF_Filter *f;
char *sep;
Bool end_of_sub_chain = GF_FALSE;
if (old_syntax) {
sep = strstr(fargs, "@@");
} else {
sep = strstr(fargs, "@");
if (sep && (sep[1] == '@'))
end_of_sub_chain = GF_TRUE;
}
if (sep) sep[0] = 0;

f = gf_fs_load_filter(dasher->fsess, fargs, &e);
if (!f) {
GF_LOG(GF_LOG_ERROR, GF_LOG_DASH, ("[DASH] Failed to load filter %s: %s\n", fargs, gf_error_to_string(e) ));
return e;
}
if (prev_filter) {
gf_filter_set_source(f, prev_filter, NULL);
}
prev_filter = f;
if (!sep) break;
sep[0] = '@';
if (old_syntax || end_of_sub_chain) {
fargs = sep+2;
if (end_of_sub_chain && prev_filter) {
gf_filter_set_source(dasher->output, prev_filter, NULL);
prev_filter = src;
}
} else {
fargs = sep+1;
}
}
if (prev_filter) {
gf_filter_set_source(dasher->output, prev_filter, szSourceID[0] ? szSourceID : NULL);
}
}

return GF_OK;
}