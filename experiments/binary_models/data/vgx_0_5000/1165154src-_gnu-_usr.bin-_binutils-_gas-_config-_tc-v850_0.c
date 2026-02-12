v850_reloc_prefix (operand)
const struct v850_operand *operand;
{
bfd_boolean paren_skipped = FALSE;


if (*input_line_pointer == '(')
{
++input_line_pointer;
paren_skipped = TRUE;
}

if (strncmp (input_line_pointer, name "(", strlen (name) + 1) == 0)	\
{									\
input_line_pointer += strlen (name);				\
return reloc;							\
}

CHECK_ ("hi0",    BFD_RELOC_HI16	   );
CHECK_ ("hi",	    BFD_RELOC_HI16_S	   );
CHECK_ ("lo",	    BFD_RELOC_LO16	   );
CHECK_ ("sdaoff", handle_sdaoff (operand));
CHECK_ ("zdaoff", handle_zdaoff (operand));
CHECK_ ("tdaoff", handle_tdaoff (operand));
CHECK_ ("hilo",   BFD_RELOC_32	   );
CHECK_ ("ctoff",  handle_ctoff (operand) );


if (paren_skipped)
--input_line_pointer;

return BFD_RELOC_UNUSED;
}