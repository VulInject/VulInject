hcode_type _wansung_to_utf8(hcode_type euc_code)
{
hcode_table *node_ptr, node;
hcode_type utf_code;
int	udc_index;





if ( (euc_code.code < 0xc9fa || euc_code.code > 0xc9fe)
&& ( (EUC_UDC_SEG1 == euc_code.byte.byte3) ||
(EUC_UDC_SEG2 == euc_code.byte.byte3) )
){
if ((euc_code.byte.byte4 < EUC_UDC_OFFSET_START) ||
(EUC_UDC_OFFSET_END < euc_code.byte.byte4)) {

utf_code.code = 0;

return(utf_code);
}

udc_index = (euc_code.byte.byte3 == EUC_UDC_SEG1) ?
0 : EUC_UDC_SEG_GAP;
udc_index += (int)(euc_code.byte.byte4 - EUC_UDC_OFFSET_START);

utf_code = _udcidx_to_utf(udc_index);

if (utf_code.code == UTF_UDC_ERROR)
utf_code.code = UTF8_NON_ID_CHAR;	

return(utf_code);
}

node.code = euc_code.word.low;

node_ptr = bsearch( &node,
euc2utf_tbl, sizeof(euc2utf_tbl)/sizeof(hcode_table),
sizeof(hcode_table), node_compare);

if (node_ptr != NULL) 
return(node_ptr->utf8);
else { 			
utf_code.code = UTF8_NON_ID_CHAR;
return(utf_code);
}

}  