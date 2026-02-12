static int
resource_clear_node_in_location(const char *rsc_id, const char *host, cib_t * cib_conn,
int cib_options, bool clear_ban_constraints, gboolean force)
{
int rc = pcmk_rc_ok;
xmlNode *fragment = NULL;
xmlNode *location = NULL;

fragment = create_xml_node(NULL, XML_CIB_TAG_CONSTRAINTS);

if (clear_ban_constraints == TRUE) {
location = create_xml_node(fragment, XML_CONS_TAG_RSC_LOCATION);
crm_xml_set_id(location, "cli-ban-%s-on-%s", rsc_id, host);
}

location = create_xml_node(fragment, XML_CONS_TAG_RSC_LOCATION);
crm_xml_set_id(location, "cli-prefer-%s", rsc_id);
if (force == FALSE) {
crm_xml_add(location, XML_CIB_TAG_NODE, host);
}

crm_log_xml_info(fragment, "Delete");
rc = cib_conn->cmds->remove(cib_conn, XML_CIB_TAG_CONSTRAINTS, fragment, cib_options);
if (rc == -ENXIO) {
rc = pcmk_rc_ok;
} else {
rc = pcmk_legacy2rc(rc);
}

free_xml(fragment);
return rc;
}