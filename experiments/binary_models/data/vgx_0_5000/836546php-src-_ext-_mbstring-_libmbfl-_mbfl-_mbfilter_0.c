mbfl_encoding_detector *mbfl_encoding_detector_new(const mbfl_encoding **elist, int elistsz, int strict)
{
if (!elistsz) {
return NULL;
}

mbfl_encoding_detector *identd = emalloc(sizeof(mbfl_encoding_detector));
identd->filter_list = ecalloc(elistsz, sizeof(mbfl_convert_filter*));
identd->filter_data = ecalloc(elistsz, sizeof(mbfl_encoding_detector_data));

int filter_list_size = 0;
for (int i = 0; i < elistsz; i++) {
mbfl_convert_filter *filter = mbfl_convert_filter_new(elist[i], &mbfl_encoding_wchar,
mbfl_estimate_encoding_likelihood, NULL, &identd->filter_data[filter_list_size]);
if (filter) {
identd->filter_list[filter_list_size++] = filter;
}
}
identd->filter_list_size = filter_list_size;
identd->strict = strict;
return identd;
}