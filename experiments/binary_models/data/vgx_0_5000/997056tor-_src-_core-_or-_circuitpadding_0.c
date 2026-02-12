int
circpad_check_received_cell(cell_t *cell, circuit_t *circ,
crypt_path_t *layer_hint,
const relay_header_t *rh)
{

switch (rh->command) {
case RELAY_COMMAND_DROP:

return 0;
case RELAY_COMMAND_PADDING_NEGOTIATE:
circpad_handle_padding_negotiate(circ, cell);
return 0;
case RELAY_COMMAND_PADDING_NEGOTIATED:
if (circpad_handle_padding_negotiated(circ, cell, layer_hint) == 0)
circuit_read_valid_data(TO_ORIGIN_CIRCUIT(circ), rh->length);
return 0;
}


if (circ->purpose == CIRCUIT_PURPOSE_C_CIRCUIT_PADDING) {
log_fn(LOG_PROTOCOL_WARN, LD_CIRC,
"Ignored cell (%d) that arrived in padding circuit "
" %u.", rh->command, CIRCUIT_IS_ORIGIN(circ) ?
TO_ORIGIN_CIRCUIT(circ)->global_identifier : 0);
return 0;
}

return 1;
}