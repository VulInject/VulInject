char * OVS_WARN_UNUSED_RESULT
parse_ofp_packet_out_str(struct ofputil_packet_out *po, const char *str_,
const struct ofputil_port_map *port_map,
const struct ofputil_table_map *table_map,
enum ofputil_protocol *usable_protocols)
{
char *string = xstrdup(str_);
char *error;

error = parse_ofp_packet_out_str__(po, string, port_map, table_map,
usable_protocols);
if (error) {
po->ofpacts = NULL;
po->ofpacts_len = 0;
}

free(string);
return error;
}