static bool g2d_check_buf_desc_is_valid(struct g2d_buf_desc *buf_desc,
enum g2d_reg_type reg_type,
unsigned long size)
{
int width, height;
unsigned long bpp, last_pos;


if (reg_type != REG_TYPE_SRC && reg_type != REG_TYPE_DST)
return true;


width = (int)buf_desc->right_x - (int)buf_desc->left_x;
if (width < G2D_LEN_MIN || width > G2D_LEN_MAX) {
DRM_ERROR("width[%d] is out of range!\n", width);
return false;
}


height = (int)buf_desc->bottom_y - (int)buf_desc->top_y;
if (height < G2D_LEN_MIN || height > G2D_LEN_MAX) {
DRM_ERROR("height[%d] is out of range!\n", height);
return false;
}

bpp = g2d_get_buf_bpp(buf_desc->format);


last_pos = ((unsigned long)buf_desc->bottom_y - 1) *
(unsigned long)buf_desc->stride +
(unsigned long)buf_desc->right_x * bpp - 1;



if (last_pos >= size) {
DRM_ERROR("last engine access position [%lu] "
"is out of range [%lu]!\n", last_pos, size);
return false;
}

return true;
}