static int readOHDRHeaderMessageDataspace(struct READER *reader,
struct DATASPACE *ds) {

int version = mysofa_getc(reader);

ds->dimensionality = (uint8_t)mysofa_getc(reader);
if (ds->dimensionality > 4) {
mylog("dimensionality must be lower than 5\n"); 
return MYSOFA_INVALID_FORMAT;                   
}

ds->flags = (uint8_t)mysofa_getc(reader);

switch (version) {
case 1:
return readOHDRHeaderMessageDataspace1(reader, ds);
case 2:
return readOHDRHeaderMessageDataspace2(reader, ds);
default:

mylog("object OHDR dataspace message must have version 1 or 2 but is %X at "
"%lX\n",
version, mysofa_tell(reader) - 1);
return MYSOFA_INVALID_FORMAT;

}
}