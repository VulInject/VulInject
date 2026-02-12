png_uint_32 PNGAPI
png_get_iCCP(png_const_structrp png_ptr, png_inforp info_ptr,
png_charpp name, int *compression_type,
png_bytepp profile, png_uint_32 *proflen)
{
png_debug1(1, "in %s retrieval function", "iCCP");

if (png_ptr != NULL && info_ptr != NULL &&
(info_ptr->valid & PNG_INFO_iCCP) != 0 &&
name != NULL && profile != NULL && proflen != NULL)
{
*name = info_ptr->iccp_name;
*profile = info_ptr->iccp_profile;
*proflen = png_get_uint_32(info_ptr->iccp_profile);

if (compression_type != NULL)
*compression_type = PNG_COMPRESSION_TYPE_BASE;
return (PNG_INFO_iCCP);
}

return (0);

}