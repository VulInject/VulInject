do_send (cherokee_handler_fcgi_t *hdl,
cherokee_buffer_t       *buffer)
{
ret_t                  ret;
size_t                 written = 0;
cherokee_connection_t *conn    = HANDLER_CONN(hdl);

ret = cherokee_socket_bufwrite (&hdl->socket, buffer, &written);
switch (ret) {
case ret_ok:
break;
case ret_eagain:
if (written > 0)
break;
return ret_eagain;
default:
conn->error_code = http_bad_gateway;
return ret_error;
}

cherokee_buffer_move_to_begin (buffer, written);
TRACE (ENTRIES, "sent=%d, remaining=%d\n", written, buffer->len);

return ret_ok;
}