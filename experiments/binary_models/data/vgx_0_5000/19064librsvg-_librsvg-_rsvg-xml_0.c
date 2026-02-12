xmlParserCtxtPtr rsvg_create_xml_parser_from_stream (xmlSAXHandlerPtr sax,
void            *sax_user_data,
GInputStream    *stream,
GCancellable    *cancellable,
GError          **error)
{
RsvgXmlInputStreamContext *context;
xmlParserCtxtPtr parser;

g_return_val_if_fail (G_IS_INPUT_STREAM (stream), NULL);
g_return_val_if_fail (cancellable == NULL || G_IS_CANCELLABLE (cancellable), NULL);
g_return_val_if_fail (error != NULL, NULL);

context = g_slice_new (RsvgXmlInputStreamContext);
context->stream = g_object_ref (stream);
context->cancellable = cancellable ? g_object_ref (cancellable) : NULL;
context->error = error;

parser = xmlCreateIOParserCtxt (sax,
sax_user_data,
context_read,
context_close,
context,
XML_CHAR_ENCODING_NONE);

if (!parser) {
g_set_error (error, rsvg_error_quark (), 0, _("Error creating XML parser"));


}

return parser;
}