int
capture_opts_add_opt(capture_options *capture_opts, int opt, const char *optarg_str_p)
{
int status, snaplen;
ws_statb64 fstat;

switch(opt) {
case 'a':        
if (set_autostop_criterion(capture_opts, optarg_str_p) == FALSE) {
cmdarg_err("Invalid or unknown -a flag \"%s\"", optarg_str_p);
return 1;
}
break;
case 'A':
if (get_auth_arguments(capture_opts, optarg_str_p) == FALSE) {
cmdarg_err("Invalid or unknown -A arg \"%s\"", optarg_str_p);
return 1;
}
break;
case 'b':        
capture_opts->multi_files_on = TRUE;
if (get_ring_arguments(capture_opts, optarg_str_p) == FALSE) {
cmdarg_err("Invalid or unknown -b arg \"%s\"", optarg_str_p);
return 1;
}
break;
case 'B':        
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->buffer_size = get_positive_int(optarg_str_p, "buffer size");
} else {
capture_opts->default_options.buffer_size = get_positive_int(optarg_str_p, "buffer size");
}
break;
case 'c':        

capture_opts->has_autostop_packets = TRUE;
capture_opts->autostop_packets = get_positive_int(optarg_str_p, "packet count");
break;
case 'f':        
get_filter_arguments(capture_opts, optarg_str_p);
break;
case 'g':        
capture_opts->group_read_access = TRUE;
break;
case 'H':        
capture_opts->show_info = FALSE;
break;
case LONGOPT_SET_TSTAMP_TYPE:        
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
g_free(interface_opts->timestamp_type);
interface_opts->timestamp_type = g_strdup(optarg_str_p);
} else {
g_free(capture_opts->default_options.timestamp_type);
capture_opts->default_options.timestamp_type = g_strdup(optarg_str_p);
}
break;
case 'i':        
status = capture_opts_add_iface_opt(capture_opts, optarg_str_p);
if (status != 0) {
return status;
}
break;
case 'I':        
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->monitor_mode = TRUE;
} else {
capture_opts->default_options.monitor_mode = TRUE;
}
break;

case 'm':
if (get_sampling_arguments(capture_opts, optarg_str_p) == FALSE) {
cmdarg_err("Invalid or unknown -m arg \"%s\"", optarg_str_p);
return 1;
}
break;
case 'n':        
capture_opts->use_pcapng = TRUE;
break;
case 'p':        
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->promisc_mode = FALSE;
} else {
capture_opts->default_options.promisc_mode = FALSE;
}
break;
case 'P':        
capture_opts->use_pcapng = FALSE;
break;
case 'r':
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->nocap_rpcap = FALSE;
} else {
capture_opts->default_options.nocap_rpcap = FALSE;
}
break;
case 's':        
snaplen = get_natural_int(optarg_str_p, "snapshot length");

if (snaplen == 0)
snaplen = WTAP_MAX_PACKET_SIZE_STANDARD;
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->has_snaplen = TRUE;
interface_opts->snaplen = snaplen;
} else {
capture_opts->default_options.snaplen = snaplen;
capture_opts->default_options.has_snaplen = TRUE;
}
break;
case 'S':        
capture_opts->real_time_mode = TRUE;
break;
case 'u':
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->datatx_udp = TRUE;
} else {
capture_opts->default_options.datatx_udp = TRUE;
}
break;
case 'w':        
capture_opts->saving_to_file = TRUE;
g_free(capture_opts->save_file);
capture_opts->save_file = g_strdup(optarg_str_p);
capture_opts->orig_save_file = g_strdup(optarg_str_p);
status = capture_opts_output_to_pipe(capture_opts->save_file, &capture_opts->output_to_pipe);
return status;
case 'y':        
if (capture_opts->ifaces->len > 0) {
interface_options *interface_opts;

interface_opts = &g_array_index(capture_opts->ifaces, interface_options, capture_opts->ifaces->len - 1);
interface_opts->linktype = linktype_name_to_val(optarg_str_p);
if (interface_opts->linktype == -1) {
cmdarg_err("The specified data link type \"%s\" isn't valid",
optarg_str_p);
return 1;
}
} else {
capture_opts->default_options.linktype = linktype_name_to_val(optarg_str_p);
if (capture_opts->default_options.linktype == -1) {
cmdarg_err("The specified data link type \"%s\" isn't valid",
optarg_str_p);
return 1;
}
}
break;
case LONGOPT_COMPRESS_TYPE:  
if (capture_opts->compress_type) {
cmdarg_err("--compress-type can be set only once");
return 1;
}
if (strcmp(optarg_str_p, "none") == 0) {
;
} else if (strcmp(optarg_str_p, "gzip") == 0) {
;
cmdarg_err("'gzip' compression is not supported");
return 1;
} else {
cmdarg_err("parameter of --compress-type can be 'none' or 'gzip'");
cmdarg_err("parameter of --compress-type can only be 'none'");
return 1;
}
capture_opts->compress_type = g_strdup(optarg_str_p);
break;
case LONGOPT_CAPTURE_TMPDIR:  
if (capture_opts->temp_dir) {
cmdarg_err("--temp-dir can be set only once");
return 1;
}
if (ws_stat64(optarg_str_p, &fstat) < 0) {
cmdarg_err("Can't set temporary directory %s: %s",
optarg_str_p, g_strerror(errno));
return 1;
}
if (!S_ISDIR(fstat.st_mode)) {
cmdarg_err("Can't set temporary directory %s: not a directory",
optarg_str_p);
return 1;
}
if ((fstat.st_mode & S_IRWXU) != S_IRWXU) {
cmdarg_err("Can't set temporary directory %s: not a writable directory",
optarg_str_p);
return 1;
}
capture_opts->temp_dir = g_strdup(optarg_str_p);
break;
default:

ws_assert_not_reached();
}

return 0;
}