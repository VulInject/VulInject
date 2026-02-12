static bool
purge_xml_attributes(xmlNode *xml)
{
xmlNode *child = NULL;
xmlAttr *xIter = NULL;
bool readable_children = false;
xml_node_private_t *nodepriv = xml->_private;

if (test_acl_mode(nodepriv->flags, pcmk__xf_acl_read)) {
crm_trace("%s[@" XML_ATTR_ID "=%s] is readable",
crm_element_name(xml), ID(xml));
return true;
}

xIter = xml->properties;
while (xIter != NULL) {
xmlAttr *tmp = xIter;
const char *prop_name = (const char *)xIter->name;

xIter = xIter->next;
if (strcmp(prop_name, XML_ATTR_ID) == 0) {
continue;
}

xmlUnsetProp(xml, tmp->name);
}

child = pcmk__xml_first_child(xml);
while ( child != NULL ) {
xmlNode *tmp = child;

child = pcmk__xml_next(child);
readable_children |= purge_xml_attributes(tmp);
}

if (!readable_children) {
free_xml(xml); 
}
return readable_children;
}