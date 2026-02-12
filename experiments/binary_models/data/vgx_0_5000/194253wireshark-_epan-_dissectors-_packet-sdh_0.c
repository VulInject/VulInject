static int
get_sdh_level(tvbuff_t *tvb, packet_info *pinfo)
{
guint64 *hdr = NULL;


if(sdh_data_rate != -1) return sdh_data_rate;


hdr = erf_get_ehdr(pinfo, EXT_HDR_TYPE_RAW_LINK, NULL);
if (hdr != NULL){
switch((*hdr & 0xff00) >> 8){
case 1: 
return 1;
case 2: 
return 4;
case 3: 
return 16;
default:  
;
}
}


switch(tvb_reported_length(tvb)){
case 2430:  
return 1;
case 9720:  
return 4;
case 19440: 
return 8;
case 38880: 
return 16;
}

return 1;
}