static WinPrAsn1EncContainer* getAsn1Container(WinPrAsn1Encoder* enc, ContainerType ctype,
WinPrAsn1_tag tag, BOOL contextual, size_t maxLen)
{
size_t ret;
size_t chunkId;
WinPrAsn1EncContainer* container;

Asn1Chunk* chunk = asn1enc_get_free_chunk(enc, maxLen, FALSE, &chunkId);
if (!chunk)
return NULL;

container = asn1enc_get_free_container(enc, &ret);
container->containerType = ctype;
container->tag = tag;
container->contextual = contextual;
container->headerChunkId = chunkId;
return container;
}