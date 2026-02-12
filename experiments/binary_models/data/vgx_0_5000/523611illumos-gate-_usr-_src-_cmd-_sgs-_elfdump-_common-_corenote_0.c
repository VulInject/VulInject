static void
dump_fltset(note_state_t *state, const char *title)
{

const sl_fltset_layout_t	*layout = state->ns_arch->fltset;
Conv_cnote_fltset_buf_t	buf;
sl_field_t		fdesc;
uint32_t		mask[NELTS];
int			i, nelts;

if (!data_present(state, &layout->sizeof_struct))
return;

fdesc = layout->word;
nelts = fdesc.slf_nelts;
if (nelts > NELTS)	
nelts = NELTS;
for (i = 0; i < nelts; i++) {
mask[i] = extract_as_word(state, &fdesc);
fdesc.slf_offset += fdesc.slf_eltlen;
}

print_str(state, title, conv_cnote_fltset(mask, nelts, 0, &buf));

}