<?php

/**
 * @file
 * hosting_custom_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hosting_custom_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['book-navigation'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'book',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['hosting-hosting_supporting_aegir'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'hosting_supporting_aegir',
    'module' => 'hosting',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '<front>',
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 1,
        'weight' => 1,
      ),
    ),
  );

  $export['menu-menu-administration'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administration',
    'module' => 'menu',
    'node_types' => array(),
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => -1,
      ),
    ),
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => 'help',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 5,
      ),
    ),
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => 'content',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 10,
      ),
    ),
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => -10,
      ),
    ),
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['views-hosting_client_list-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hosting_client_list-block_1',
    'module' => 'views',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => '',
        'status' => 0,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  $export['views-hosting_platform_list-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hosting_platform_list-block_1',
    'module' => 'views',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => 'hosting/c/server_*',
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 1,
        'weight' => 0,
      ),
    ),
  );

  $export['views-hosting_site_list-block_sites'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hosting_site_list-block_sites',
    'module' => 'views',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => 'hosting/c/platform_*',
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 1,
        'weight' => 0,
      ),
    ),
  );

  $export['views-hosting_task_list-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hosting_task_list-block',
    'module' => 'views',
    'node_types' => array(),
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'pages' => '',
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eldir',
        'title' => '',
        'visibility' => 0,
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
