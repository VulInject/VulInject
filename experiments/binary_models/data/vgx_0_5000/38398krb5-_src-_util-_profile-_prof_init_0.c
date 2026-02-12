errcode_t profile_ser_size(const char *unused, profile_t profile,
size_t *sizep)
{
size_t      required;
prf_file_t  pfp;

required = 3*sizeof(int32_t);
for (pfp = profile->first_file; pfp; pfp = pfp->next) {
required += sizeof(int32_t);
required += strlen(pfp->data->filespec);
}
*sizep += required;
return 0;
}