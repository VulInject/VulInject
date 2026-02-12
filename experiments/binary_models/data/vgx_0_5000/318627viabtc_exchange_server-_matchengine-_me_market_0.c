int market_put_limit_order(bool real, json_t **result, market_t *m, uint32_t user_id, uint32_t side, mpd_t *amount, mpd_t *price, mpd_t *taker_fee, mpd_t *maker_fee, const char *source)
{
if (side == MARKET_ORDER_SIDE_ASK) {
mpd_t *balance = balance_get(user_id, BALANCE_TYPE_AVAILABLE, m->stock);
if (!balance || mpd_cmp(balance, amount, &mpd_ctx) < 0) {
return -1;
}
} else {
mpd_t *balance = balance_get(user_id, BALANCE_TYPE_AVAILABLE, m->money);
mpd_t *require = mpd_new(&mpd_ctx);
mpd_mul(require, amount, price, &mpd_ctx);
if (!balance || mpd_cmp(balance, require, &mpd_ctx) < 0) {
mpd_del(require);
return -1;
}
mpd_del(require);
}

if (mpd_cmp(amount, m->min_amount, &mpd_ctx) < 0) {
return -2;
}

order_t *order = malloc(sizeof(order_t));
if (order == NULL) {
return -__LINE__;
}

order->id           = ++order_id_start;
order->type         = MARKET_ORDER_TYPE_LIMIT;
order->side         = side;
order->create_time  = current_timestamp();
order->update_time  = order->create_time;
order->market       = strdup(m->name);
order->source       = strdup(source);
order->user_id      = user_id;
order->price        = mpd_new(&mpd_ctx);
order->amount       = mpd_new(&mpd_ctx);
order->taker_fee    = mpd_new(&mpd_ctx);
order->maker_fee    = mpd_new(&mpd_ctx);
order->left         = mpd_new(&mpd_ctx);
order->freeze       = mpd_new(&mpd_ctx);
order->deal_stock   = mpd_new(&mpd_ctx);
order->deal_money   = mpd_new(&mpd_ctx);
order->deal_fee     = mpd_new(&mpd_ctx);

mpd_copy(order->price, price, &mpd_ctx);
mpd_copy(order->amount, amount, &mpd_ctx);
mpd_copy(order->taker_fee, taker_fee, &mpd_ctx);
mpd_copy(order->maker_fee, maker_fee, &mpd_ctx);
mpd_copy(order->left, amount, &mpd_ctx);
mpd_copy(order->freeze, mpd_zero, &mpd_ctx);
mpd_copy(order->deal_stock, mpd_zero, &mpd_ctx);
mpd_copy(order->deal_money, mpd_zero, &mpd_ctx);
mpd_copy(order->deal_fee, mpd_zero, &mpd_ctx);

int ret;
if (side == MARKET_ORDER_SIDE_ASK) {
ret = execute_limit_ask_order(real, m, order);
} else {
ret = execute_limit_bid_order(real, m, order);
}
if (ret < 0) {
log_error("execute order: %"PRIu64" fail: %d", order->id, ret);
order_free(order);
return -__LINE__;
}

if (mpd_cmp(order->left, mpd_zero, &mpd_ctx) == 0) {
if (real) {
ret = append_order_history(order);
if (ret < 0) {
log_fatal("append_order_history fail: %d, order: %"PRIu64"", ret, order->id);
}
push_order_message(ORDER_EVENT_FINISH, order, m);
*result = get_order_info(order);
}
order_free(order);
} else {
if (real) {
push_order_message(ORDER_EVENT_PUT, order, m);
*result = get_order_info(order);
}
ret = order_put(m, order);
if (ret < 0) {
log_fatal("order_put fail: %d, order: %"PRIu64"", ret, order->id);
}
}

return 0;
}