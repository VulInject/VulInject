void
raptor_sax2_end_element(void* user_data, const unsigned char *name)
{
raptor_sax2* sax2 = (raptor_sax2*)user_data;
raptor_xml_element* xml_element;

if(sax2->failed || !sax2->enabled)
return;

xml_element = sax2->current_element;
if(xml_element) {
fprintf(stderr, "\nraptor_rdfxml_end_element_handler: End ns-element: ");
raptor_qname_print(stderr, xml_element->name);
fputc('\n', stderr);

if(sax2->end_element_handler)
sax2->end_element_handler(sax2->user_data, xml_element);
}

raptor_namespaces_end_for_depth(&sax2->namespaces, 
raptor_sax2_get_depth(sax2));
xml_element = raptor_xml_element_pop(sax2);
if(xml_element)
raptor_free_xml_element(xml_element);

raptor_sax2_dec_depth(sax2);
}