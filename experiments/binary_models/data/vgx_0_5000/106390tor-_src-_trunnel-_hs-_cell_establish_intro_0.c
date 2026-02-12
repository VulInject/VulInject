ssize_t
trn_cell_extension_dos_parse(trn_cell_extension_dos_t **output, const uint8_t *input, const size_t len_in)
{
ssize_t result;
*output = trn_cell_extension_dos_new();
if (NULL == *output)
return -1;
result = trn_cell_extension_dos_parse_into(*output, input, len_in);
if (result < 0) {
trn_cell_extension_dos_free(*output);
*output = NULL;
}
return result;
}