static void TransformStripWhitespace(InspectionBuffer *buffer, void *options)
{
const uint8_t *input = buffer->inspect;
const uint32_t input_len = buffer->inspect_len;
if (input_len == 0) {
return;
}
uint8_t output[input_len]; 
uint8_t *oi = output, *os = output;


for (uint32_t i = 0; i < input_len; i++) {
if (!isspace(*input)) {
*oi++ = *input;
}
input++;
}
uint32_t output_size = oi - os;


InspectionBufferCopy(buffer, os, output_size);
}