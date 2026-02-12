static inline bool hid_mouse_transfer_next(app_usbd_hid_mouse_t const * p_mouse)
{

app_usbd_hid_mouse_ctx_t *            p_mouse_ctx = hid_mouse_ctx_get(p_mouse);
app_usbd_hid_report_buffer_t const *  p_rep_buffer = hid_mouse_rep_buffer_get(p_mouse);

uint8_t * p_buff = p_rep_buffer->p_buff;


uint8_t last_button_state = p_buff[0];


p_buff[0] = p_mouse_ctx->button_state;


int8_t val_x = hid_mouse_axis_acc_get(p_mouse_ctx->acc_x_axis);
p_mouse_ctx->acc_x_axis -= val_x;
p_buff[1] = val_x;


int8_t val_y = hid_mouse_axis_acc_get(p_mouse_ctx->acc_y_axis);
p_mouse_ctx->acc_y_axis -= val_y;
p_buff[2] = val_y;


int8_t val_scroll = hid_mouse_axis_acc_get(p_mouse_ctx->acc_scroll);
p_mouse_ctx->acc_scroll -= val_scroll;
p_buff[3] = val_scroll;

if (val_x || val_y || val_scroll)
{

return true;
}

if (last_button_state != p_buff[0])
{

return true;
}

return false;
}