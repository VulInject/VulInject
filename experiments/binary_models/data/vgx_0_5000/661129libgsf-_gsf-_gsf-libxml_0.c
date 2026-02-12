gsf_xml_in_push_state (GsfXMLIn *xin, GsfXMLInDoc const *doc,
gpointer new_state, GsfXMLInExtDtor dtor,
xmlChar const **attrs)
{
GsfXMLInInternal *state = (GsfXMLInInternal *)xin;
GsfXMLInExtension *ext;

g_return_if_fail (xin != NULL);
g_return_if_fail (doc != NULL);
g_return_if_fail (doc->root_node != NULL);

ext = g_new (GsfXMLInExtension, 1);
ext->doc	  = doc;
ext->state	  = new_state;
ext->dtor	  = dtor;
if (!(ext->from_unknown = state->from_unknown_handler)) {
GsfXMLInNodeInternal *node = (GsfXMLInNodeInternal *) xin->node;
node->extensions = g_slist_prepend (node->extensions, ext);
} else
push_child (state, &doc->root_node->pub, -1, attrs, ext);
}