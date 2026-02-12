static tap_packet_status
dcm_eo_packet(void *tapdata, packet_info *pinfo, epan_dissect_t *edt _U_,
const void *data, tap_flags_t flags _U_)
{
export_object_list_t *object_list = (export_object_list_t *)tapdata;
const dicom_eo_t *eo_info = (const dicom_eo_t *)data;
export_object_entry_t *entry;

if (eo_info) { 

entry = g_new(export_object_entry_t, 1);

entry->pkt_num = pinfo->num;
entry->hostname = eo_info->hostname;
entry->content_type = eo_info->content_type;
entry->filename = g_path_get_basename(eo_info->filename);
entry->payload_len  = eo_info->payload_len;
entry->payload_data = eo_info->payload_data;

object_list->add_entry(object_list->gui_data, entry);

return TAP_PACKET_REDRAW; 
} else {
return TAP_PACKET_DONT_REDRAW; 
}
}