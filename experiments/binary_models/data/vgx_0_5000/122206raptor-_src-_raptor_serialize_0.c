int
raptor_serializer_start_to_string(raptor_serializer *rdf_serializer,
raptor_uri *uri,
void **string_p, size_t *length_p) 
{
if(rdf_serializer->base_uri)
raptor_free_uri(rdf_serializer->base_uri);

if(uri)
rdf_serializer->base_uri = raptor_uri_copy(uri);
else
rdf_serializer->base_uri = NULL;
rdf_serializer->locator.uri = rdf_serializer->base_uri;
rdf_serializer->locator.line = rdf_serializer->locator.column = 0;


rdf_serializer->iostream = raptor_new_iostream_to_string(rdf_serializer->world,
string_p, length_p, 
NULL);
if(!rdf_serializer->iostream)
return 1;

rdf_serializer->free_iostream_on_end = 1;

if(rdf_serializer->factory->serialize_start)
return rdf_serializer->factory->serialize_start(rdf_serializer);
return 0;
}