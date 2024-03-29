<?php

/**
 * @file
 * hosting_custom_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hosting_custom_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_book';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_client';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_platform';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_server';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_site';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_book';
  $strongarm->value = 0;
  $export['comment_anonymous_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_client';
  $strongarm->value = 0;
  $export['comment_anonymous_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_platform';
  $strongarm->value = 0;
  $export['comment_anonymous_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_server';
  $strongarm->value = 0;
  $export['comment_anonymous_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_site';
  $strongarm->value = 0;
  $export['comment_anonymous_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_book';
  $strongarm->value = '0';
  $export['comment_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_client';
  $strongarm->value = '2';
  $export['comment_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_book';
  $strongarm->value = '3';
  $export['comment_controls_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_client';
  $strongarm->value = '3';
  $export['comment_controls_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_platform';
  $strongarm->value = '3';
  $export['comment_controls_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_server';
  $strongarm->value = '3';
  $export['comment_controls_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_site';
  $strongarm->value = '3';
  $export['comment_controls_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_book';
  $strongarm->value = 0;
  $export['comment_default_mode_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_client';
  $strongarm->value = 0;
  $export['comment_default_mode_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_package';
  $strongarm->value = 1;
  $export['comment_default_mode_package'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_platform';
  $strongarm->value = 0;
  $export['comment_default_mode_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_server';
  $strongarm->value = 0;
  $export['comment_default_mode_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_site';
  $strongarm->value = 0;
  $export['comment_default_mode_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_task';
  $strongarm->value = 1;
  $export['comment_default_mode_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_book';
  $strongarm->value = '1';
  $export['comment_default_order_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_client';
  $strongarm->value = '1';
  $export['comment_default_order_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_platform';
  $strongarm->value = '1';
  $export['comment_default_order_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_server';
  $strongarm->value = '1';
  $export['comment_default_order_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_site';
  $strongarm->value = '1';
  $export['comment_default_order_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_book';
  $strongarm->value = '10';
  $export['comment_default_per_page_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_client';
  $strongarm->value = '10';
  $export['comment_default_per_page_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_platform';
  $strongarm->value = '10';
  $export['comment_default_per_page_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_server';
  $strongarm->value = '10';
  $export['comment_default_per_page_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_site';
  $strongarm->value = '10';
  $export['comment_default_per_page_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_book';
  $strongarm->value = 0;
  $export['comment_form_location_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_client';
  $strongarm->value = 0;
  $export['comment_form_location_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_platform';
  $strongarm->value = 0;
  $export['comment_form_location_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_server';
  $strongarm->value = 0;
  $export['comment_form_location_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_site';
  $strongarm->value = 0;
  $export['comment_form_location_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_platform';
  $strongarm->value = '2';
  $export['comment_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_book';
  $strongarm->value = '0';
  $export['comment_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_client';
  $strongarm->value = '0';
  $export['comment_preview_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_package';
  $strongarm->value = 2;
  $export['comment_preview_package'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_platform';
  $strongarm->value = '0';
  $export['comment_preview_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_server';
  $strongarm->value = '0';
  $export['comment_preview_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_site';
  $strongarm->value = '0';
  $export['comment_preview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_task';
  $strongarm->value = 2;
  $export['comment_preview_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_server';
  $strongarm->value = '2';
  $export['comment_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_site';
  $strongarm->value = '2';
  $export['comment_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_book';
  $strongarm->value = 0;
  $export['comment_subject_field_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_client';
  $strongarm->value = 0;
  $export['comment_subject_field_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_platform';
  $strongarm->value = 0;
  $export['comment_subject_field_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_server';
  $strongarm->value = 0;
  $export['comment_subject_field_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_site';
  $strongarm->value = 0;
  $export['comment_subject_field_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_feature_fix_ownership';
  $strongarm->value = 1;
  $export['hosting_feature_fix_ownership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_feature_fix_permissions';
  $strongarm->value = 1;
  $export['hosting_feature_fix_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_gc_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_backup_gc_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_cron_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_cron_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_task_gc_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_task_gc_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_tasks_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_tasks_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array();
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_client';
  $strongarm->value = array();
  $export['menu_options_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_platform';
  $strongarm->value = array();
  $export['menu_options_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_server';
  $strongarm->value = array();
  $export['menu_options_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_site';
  $strongarm->value = array();
  $export['menu_options_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_client';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_platform';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_platform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_server';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_site';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = 1;
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 0;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlay_paths_ui_paths';
  $strongarm->value = array(
    'admin/hosting' => array(
      'width' => '80%',
    ),
    'admin/hosting/*' => array(
      'width' => '80%',
    ),
    'comment/reply/*' => array(
      'width' => '80%',
    ),
    'hosting/*/add' => array(
      'width' => '80%',
    ),
    'hosting/task/*' => TRUE,
    'node/*/tasks' => array(
      'width' => '80%',
    ),
    'node/add/*' => array(
      'width' => '80%',
    ),
    'user/register' => array(
      'width' => '80%',
    ),
    'user/register/*' => array(
      'width' => '80%',
    ),
    'user/register/step/2' => FALSE,
  );
  $export['overlay_paths_ui_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete';
  $strongarm->value = array(
    'book' => 0,
    'client' => 0,
    'package' => 0,
    'platform' => 0,
    'server' => 0,
    'site' => 0,
    'task' => 'task',
  );
  $export['revision_delete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_age';
  $strongarm->value = '7776000';
  $export['revision_delete_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_cron';
  $strongarm->value = 1411812913;
  $export['revision_delete_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_freq';
  $strongarm->value = '86400';
  $export['revision_delete_freq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_limit';
  $strongarm->value = '8';
  $export['revision_delete_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_current';
  $strongarm->value = '0';
  $export['revision_delete_list_keep_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_date_last';
  $strongarm->value = 0;
  $export['revision_delete_list_keep_date_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_original';
  $strongarm->value = 0;
  $export['revision_delete_list_keep_original'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_show_conditional';
  $strongarm->value = '1';
  $export['revision_delete_list_show_conditional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_takeover';
  $strongarm->value = '1';
  $export['revision_delete_list_takeover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'default_favicon' => 1,
    'default_logo' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'logo_path' => '',
    'logo_upload' => '',
    'toggle_comment_user_picture' => 0,
    'toggle_favicon' => 1,
    'toggle_logo' => 1,
    'toggle_mission' => 1,
    'toggle_name' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_primary_links' => 1,
    'toggle_search' => 0,
    'toggle_secondary_links' => 1,
    'toggle_slogan' => 0,
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_administrator_bypass_defaults';
  $strongarm->value = array(
    'up_cancel' => 0,
    'up_edit' => 0,
    'up_mail' => 0,
    'up_name' => 0,
    'up_openid' => 0,
    'up_pass' => 0,
    'up_roles' => 0,
    'up_status' => 0,
  );
  $export['userprotect_administrator_bypass_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_autoprotect';
  $strongarm->value = 1;
  $export['userprotect_autoprotect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_protection_defaults';
  $strongarm->value = array(
    'up_cancel' => 0,
    'up_edit' => 0,
    'up_mail' => 0,
    'up_name' => 0,
    'up_openid' => 0,
    'up_pass' => 0,
    'up_roles' => 'up_roles',
    'up_status' => 0,
  );
  $export['userprotect_protection_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_role_protections';
  $strongarm->value = array(
    2 => array(
      'up_cancel' => 0,
      'up_edit' => 0,
      'up_mail' => 0,
      'up_name' => 0,
      'up_openid' => 0,
      'up_pass' => 0,
      'up_roles' => 1,
      'up_status' => 0,
    ),
    3 => array(
      'up_cancel' => 0,
      'up_edit' => 0,
      'up_mail' => 0,
      'up_name' => 0,
      'up_openid' => 0,
      'up_pass' => 0,
      'up_roles' => 1,
      'up_status' => 0,
    ),
    4 => array(
      'up_cancel' => 0,
      'up_edit' => 0,
      'up_mail' => 0,
      'up_name' => 0,
      'up_openid' => 0,
      'up_pass' => 0,
      'up_roles' => 1,
      'up_status' => 0,
    ),
    5 => array(
      'up_cancel' => 1,
      'up_edit' => 0,
      'up_mail' => 0,
      'up_name' => 0,
      'up_openid' => 0,
      'up_pass' => 0,
      'up_roles' => 1,
      'up_status' => 1,
    ),
    6 => array(
      'up_cancel' => 1,
      'up_edit' => 0,
      'up_mail' => 0,
      'up_name' => 0,
      'up_openid' => 0,
      'up_pass' => 0,
      'up_roles' => 1,
      'up_status' => 1,
    ),
  );
  $export['userprotect_role_protections'] = $strongarm;

  return $export;
}
