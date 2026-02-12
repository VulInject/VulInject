int msc_list_objects(sc_card_t* card, u8 next, mscfs_file_t* file) {
sc_apdu_t apdu;
u8 fileData[14];
int r;

sc_format_apdu(card, &apdu, SC_APDU_CASE_2, 0x58, next, 0x00);
apdu.le = 14;
apdu.resplen = 14;
apdu.resp = fileData;
r = sc_transmit_apdu(card, &apdu);
if (r)
return r;

if(apdu.sw1 == 0x9C && apdu.sw2 == 0x12) {
return 0;
}
r = sc_check_sw(card, apdu.sw1, apdu.sw2);
if (r)
return r;
if(apdu.resplen == 0) 
return 0;
if (apdu.resplen != 14) {
sc_log(card->ctx, 
"expected 14 bytes, got %"SC_FORMAT_LEN_SIZE_T"u.\n",
apdu.resplen);
return SC_ERROR_UNKNOWN_DATA_RECEIVED;
}
memcpy(file->objectId.id, fileData, 4);
file->size = bebytes2ulong(fileData + 4);
file->read = bebytes2ushort(fileData + 8);
file->write = bebytes2ushort(fileData + 10);
file->delete = bebytes2ushort(fileData + 12);

return 1;
}