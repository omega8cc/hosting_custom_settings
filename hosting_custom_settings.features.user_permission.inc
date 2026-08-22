<?php

/**
 * @file
 * hosting_custom_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hosting_custom_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'root' => 'root',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access disabled sites'.
  $permissions['access disabled sites'] = array(
    'name' => 'access disabled sites',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'access hosting signup form'.
  $permissions['access hosting signup form'] = array(
    'name' => 'access hosting signup form',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'hosting_signup',
  );

  // Exported permission: 'access hosting wizard'.
  $permissions['access hosting wizard'] = array(
    'name' => 'access hosting wizard',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'access library reports'.
  $permissions['access library reports'] = array(
    'name' => 'access library reports',
    'roles' => array(),
    'module' => 'libraries',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(),
    'module' => 'book',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access task logs'.
  $permissions['access task logs'] = array(
    'name' => 'access task logs',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(),
    'module' => 'book',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(),
    'module' => 'book',
  );

  // Exported permission: 'administer clients'.
  $permissions['administer clients'] = array(
    'name' => 'administer clients',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'root' => 'root',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer hosting'.
  $permissions['administer hosting'] = array(
    'name' => 'administer hosting',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'administer hosting aliases'.
  $permissions['administer hosting aliases'] = array(
    'name' => 'administer hosting aliases',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_alias',
  );

  // Exported permission: 'administer hosting features'.
  $permissions['administer hosting features'] = array(
    'name' => 'administer hosting features',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'administer hosting queues'.
  $permissions['administer hosting queues'] = array(
    'name' => 'administer hosting queues',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'administer hosting settings'.
  $permissions['administer hosting settings'] = array(
    'name' => 'administer hosting settings',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting',
  );

  // Exported permission: 'administer hosting site backup manager'.
  $permissions['administer hosting site backup manager'] = array(
    'name' => 'administer hosting site backup manager',
    'roles' => array(),
    'module' => 'hosting_site_backup_manager',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer platforms'.
  $permissions['administer platforms'] = array(
    'name' => 'administer platforms',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'administer revision_deletion'.
  $permissions['administer revision_deletion'] = array(
    'name' => 'administer revision_deletion',
    'roles' => array(),
    'module' => 'revision_deletion',
  );

  // Exported permission: 'administer servers'.
  $permissions['administer servers'] = array(
    'name' => 'administer servers',
    'roles' => array(),
    'module' => 'hosting_server',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer sites'.
  $permissions['administer sites'] = array(
    'name' => 'administer sites',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'hosting_site',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer tasks'.
  $permissions['administer tasks'] = array(
    'name' => 'administer tasks',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer userprotect'.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(),
    'module' => 'userprotect',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'cancel own tasks'.
  $permissions['cancel own tasks'] = array(
    'name' => 'cancel own tasks',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'change own e-mail'.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own openid'.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure site CiviCRM cron intervals'.
  $permissions['configure site CiviCRM cron intervals'] = array(
    'name' => 'configure site CiviCRM cron intervals',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_civicrm_cron',
  );

  // Exported permission: 'configure site cron interval'.
  $permissions['configure site cron interval'] = array(
    'name' => 'configure site cron interval',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'hosting_cron',
  );

  // Exported permission: 'create backdrop_cutover task'.
  $permissions['create backdrop_cutover task'] = array(
    'name' => 'create backdrop_cutover task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_backdrop',
  );

  // Exported permission: 'create backdrop_d6_upgrade task'.
  $permissions['create backdrop_d6_upgrade task'] = array(
    'name' => 'create backdrop_d6_upgrade task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_backdrop',
  );

  // Exported permission: 'create backdrop_upgrade task'.
  $permissions['create backdrop_upgrade task'] = array(
    'name' => 'create backdrop_upgrade task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_backdrop',
  );

  // Exported permission: 'create backup task'.
  $permissions['create backup task'] = array(
    'name' => 'create backup task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create backup-delete task'.
  $permissions['create backup-delete task'] = array(
    'name' => 'create backup-delete task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create client'.
  $permissions['create client'] = array(
    'name' => 'create client',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'create client content'.
  $permissions['create client content'] = array(
    'name' => 'create client content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create clone task'.
  $permissions['create clone task'] = array(
    'name' => 'create clone task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_clone',
  );

  // Exported permission: 'create delete task'.
  $permissions['create delete task'] = array(
    'name' => 'create delete task',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create disable task'.
  $permissions['create disable task'] = array(
    'name' => 'create disable task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create dlock task'.
  $permissions['create dlock task'] = array(
    'name' => 'create dlock task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'create dunlock task'.
  $permissions['create dunlock task'] = array(
    'name' => 'create dunlock task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'create enable task'.
  $permissions['create enable task'] = array(
    'name' => 'create enable task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create features_revert_all task'.
  $permissions['create features_revert_all task'] = array(
    'name' => 'create features_revert_all task',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create features_update_all task'.
  $permissions['create features_update_all task'] = array(
    'name' => 'create features_update_all task',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create flush_cache task'.
  $permissions['create flush_cache task'] = array(
    'name' => 'create flush_cache task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create flush_drush_cache task'.
  $permissions['create flush_drush_cache task'] = array(
    'name' => 'create flush_drush_cache task',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create git-pull task'.
  $permissions['create git-pull task'] = array(
    'name' => 'create git-pull task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_git_pull',
  );

  // Exported permission: 'create leftover_import task'.
  $permissions['create leftover_import task'] = array(
    'name' => 'create leftover_import task',
    'roles' => array(
      'admin' => 'admin',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create leftover_purge task'.
  $permissions['create leftover_purge task'] = array(
    'name' => 'create leftover_purge task',
    'roles' => array(
      'admin' => 'admin',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create lock task'.
  $permissions['create lock task'] = array(
    'name' => 'create lock task',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create login-reset task'.
  $permissions['create login-reset task'] = array(
    'name' => 'create login-reset task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create migrate task'.
  $permissions['create migrate task'] = array(
    'name' => 'create migrate task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_migrate',
  );

  // Exported permission: 'create migrate_source task'.
  $permissions['create migrate_source task'] = array(
    'name' => 'create migrate_source task',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_migrate_source',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(),
    'module' => 'book',
  );

  // Exported permission: 'create package'.
  $permissions['create package'] = array(
    'name' => 'create package',
    'roles' => array(),
    'module' => 'hosting_package',
  );

  // Exported permission: 'create package content'.
  $permissions['create package content'] = array(
    'name' => 'create package content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create platform'.
  $permissions['create platform'] = array(
    'name' => 'create platform',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'create platform content'.
  $permissions['create platform content'] = array(
    'name' => 'create platform content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create platform git-checkout task'.
  $permissions['create platform git-checkout task'] = array(
    'name' => 'create platform git-checkout task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_git_checkout',
  );

  // Exported permission: 'create platform git-commit task'.
  $permissions['create platform git-commit task'] = array(
    'name' => 'create platform git-commit task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_git_commit',
  );

  // Exported permission: 'create platform git-pull task'.
  $permissions['create platform git-pull task'] = array(
    'name' => 'create platform git-pull task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_git_pull',
  );

  // Exported permission: 'create platform git-tag task'.
  $permissions['create platform git-tag task'] = array(
    'name' => 'create platform git-tag task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_git_tag',
  );

  // Exported permission: 'create rebuild_registry task'.
  $permissions['create rebuild_registry task'] = array(
    'name' => 'create rebuild_registry task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create restore task'.
  $permissions['create restore task'] = array(
    'name' => 'create restore task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create run_cron task'.
  $permissions['create run_cron task'] = array(
    'name' => 'create run_cron task',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create server'.
  $permissions['create server'] = array(
    'name' => 'create server',
    'roles' => array(),
    'module' => 'hosting_server',
  );

  // Exported permission: 'create server content'.
  $permissions['create server content'] = array(
    'name' => 'create server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create site'.
  $permissions['create site'] = array(
    'name' => 'create site',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_site',
  );

  // Exported permission: 'create site aliases'.
  $permissions['create site aliases'] = array(
    'name' => 'create site aliases',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_alias',
  );

  // Exported permission: 'create site content'.
  $permissions['create site content'] = array(
    'name' => 'create site content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create site git-checkout task'.
  $permissions['create site git-checkout task'] = array(
    'name' => 'create site git-checkout task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_git_checkout',
  );

  // Exported permission: 'create site git-commit task'.
  $permissions['create site git-commit task'] = array(
    'name' => 'create site git-commit task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_git_commit',
  );

  // Exported permission: 'create site git-tag task'.
  $permissions['create site git-tag task'] = array(
    'name' => 'create site git-tag task',
    'roles' => array(
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_git_tag',
  );

  // Exported permission: 'create site_health_check task'.
  $permissions['create site_health_check task'] = array(
    'name' => 'create site_health_check task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create sites on locked platforms'.
  $permissions['create sites on locked platforms'] = array(
    'name' => 'create sites on locked platforms',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'create ssl certificate'.
  $permissions['create ssl certificate'] = array(
    'name' => 'create ssl certificate',
    'roles' => array(
      'admin' => 'admin',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_ssl',
  );

  // Exported permission: 'create task content'.
  $permissions['create task content'] = array(
    'name' => 'create task content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create unlock task'.
  $permissions['create unlock task'] = array(
    'name' => 'create unlock task',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'create update task'.
  $permissions['create update task'] = array(
    'name' => 'create update task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create update_translations task'.
  $permissions['create update_translations task'] = array(
    'name' => 'create update_translations task',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create utf8mb4_convert task'.
  $permissions['create utf8mb4_convert task'] = array(
    'name' => 'create utf8mb4_convert task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_tasks_extra',
  );

  // Exported permission: 'create verify task'.
  $permissions['create verify task'] = array(
    'name' => 'create verify task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any client content'.
  $permissions['delete any client content'] = array(
    'name' => 'delete any client content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any package content'.
  $permissions['delete any package content'] = array(
    'name' => 'delete any package content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any platform content'.
  $permissions['delete any platform content'] = array(
    'name' => 'delete any platform content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any server content'.
  $permissions['delete any server content'] = array(
    'name' => 'delete any server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any site content'.
  $permissions['delete any site content'] = array(
    'name' => 'delete any site content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any task content'.
  $permissions['delete any task content'] = array(
    'name' => 'delete any task content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own client'.
  $permissions['delete own client'] = array(
    'name' => 'delete own client',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'delete own client content'.
  $permissions['delete own client content'] = array(
    'name' => 'delete own client content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own package content'.
  $permissions['delete own package content'] = array(
    'name' => 'delete own package content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own platform content'.
  $permissions['delete own platform content'] = array(
    'name' => 'delete own platform content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own server content'.
  $permissions['delete own server content'] = array(
    'name' => 'delete own server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own site content'.
  $permissions['delete own site content'] = array(
    'name' => 'delete own site content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own task content'.
  $permissions['delete own task content'] = array(
    'name' => 'delete own task content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete package'.
  $permissions['delete package'] = array(
    'name' => 'delete package',
    'roles' => array(),
    'module' => 'hosting_package',
  );

  // Exported permission: 'delete platform'.
  $permissions['delete platform'] = array(
    'name' => 'delete platform',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete server'.
  $permissions['delete server'] = array(
    'name' => 'delete server',
    'roles' => array(),
    'module' => 'hosting_server',
  );

  // Exported permission: 'delete site'.
  $permissions['delete site'] = array(
    'name' => 'delete site',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_site',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any client content'.
  $permissions['edit any client content'] = array(
    'name' => 'edit any client content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any package content'.
  $permissions['edit any package content'] = array(
    'name' => 'edit any package content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any platform content'.
  $permissions['edit any platform content'] = array(
    'name' => 'edit any platform content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any server content'.
  $permissions['edit any server content'] = array(
    'name' => 'edit any server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any site content'.
  $permissions['edit any site content'] = array(
    'name' => 'edit any site content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any task content'.
  $permissions['edit any task content'] = array(
    'name' => 'edit any task content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit client uname'.
  $permissions['edit client uname'] = array(
    'name' => 'edit client uname',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'edit client users'.
  $permissions['edit client users'] = array(
    'name' => 'edit client users',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'edit own account'.
  $permissions['edit own account'] = array(
    'name' => 'edit own account',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own client'.
  $permissions['edit own client'] = array(
    'name' => 'edit own client',
    'roles' => array(
      'admin' => 'admin',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'edit own client content'.
  $permissions['edit own client content'] = array(
    'name' => 'edit own client content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'root' => 'root',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own package content'.
  $permissions['edit own package content'] = array(
    'name' => 'edit own package content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own platform content'.
  $permissions['edit own platform content'] = array(
    'name' => 'edit own platform content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own server content'.
  $permissions['edit own server content'] = array(
    'name' => 'edit own server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own site content'.
  $permissions['edit own site content'] = array(
    'name' => 'edit own site content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own task content'.
  $permissions['edit own task content'] = array(
    'name' => 'edit own task content',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit package'.
  $permissions['edit package'] = array(
    'name' => 'edit package',
    'roles' => array(),
    'module' => 'hosting_package',
  );

  // Exported permission: 'edit platform'.
  $permissions['edit platform'] = array(
    'name' => 'edit platform',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'edit server'.
  $permissions['edit server'] = array(
    'name' => 'edit server',
    'roles' => array(),
    'module' => 'hosting_server',
  );

  // Exported permission: 'edit site'.
  $permissions['edit site'] = array(
    'name' => 'edit site',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_site',
  );

  // Exported permission: 'execute comment_publish_action'.
  $permissions['execute comment_publish_action'] = array(
    'name' => 'execute comment_publish_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_save_action'.
  $permissions['execute comment_save_action'] = array(
    'name' => 'execute comment_save_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_action'.
  $permissions['execute comment_unpublish_action'] = array(
    'name' => 'execute comment_unpublish_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_by_keyword_action'.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
    'name' => 'execute comment_unpublish_by_keyword_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_delete_action'.
  $permissions['execute hosting_platform_delete_action'] = array(
    'name' => 'execute hosting_platform_delete_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_dlock_action'.
  $permissions['execute hosting_platform_dlock_action'] = array(
    'name' => 'execute hosting_platform_dlock_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_dunlock_action'.
  $permissions['execute hosting_platform_dunlock_action'] = array(
    'name' => 'execute hosting_platform_dunlock_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_lock_action'.
  $permissions['execute hosting_platform_lock_action'] = array(
    'name' => 'execute hosting_platform_lock_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_unlock_action'.
  $permissions['execute hosting_platform_unlock_action'] = array(
    'name' => 'execute hosting_platform_unlock_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_platform_verify_action'.
  $permissions['execute hosting_platform_verify_action'] = array(
    'name' => 'execute hosting_platform_verify_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_backup_action'.
  $permissions['execute hosting_site_backup_action'] = array(
    'name' => 'execute hosting_site_backup_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_delete_action'.
  $permissions['execute hosting_site_delete_action'] = array(
    'name' => 'execute hosting_site_delete_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_disable_action'.
  $permissions['execute hosting_site_disable_action'] = array(
    'name' => 'execute hosting_site_disable_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_enable_action'.
  $permissions['execute hosting_site_enable_action'] = array(
    'name' => 'execute hosting_site_enable_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_flush_cache_action'.
  $permissions['execute hosting_site_flush_cache_action'] = array(
    'name' => 'execute hosting_site_flush_cache_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_rebuild_registry_action'.
  $permissions['execute hosting_site_rebuild_registry_action'] = array(
    'name' => 'execute hosting_site_rebuild_registry_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_utf8mb4_convert_action'.
  $permissions['execute hosting_site_utf8mb4_convert_action'] = array(
    'name' => 'execute hosting_site_utf8mb4_convert_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute hosting_site_verify_action'.
  $permissions['execute hosting_site_verify_action'] = array(
    'name' => 'execute hosting_site_verify_action',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_assign_owner_action'.
  $permissions['execute node_assign_owner_action'] = array(
    'name' => 'execute node_assign_owner_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_sticky_action'.
  $permissions['execute node_make_sticky_action'] = array(
    'name' => 'execute node_make_sticky_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_unsticky_action'.
  $permissions['execute node_make_unsticky_action'] = array(
    'name' => 'execute node_make_unsticky_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_promote_action'.
  $permissions['execute node_promote_action'] = array(
    'name' => 'execute node_promote_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_publish_action'.
  $permissions['execute node_publish_action'] = array(
    'name' => 'execute node_publish_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_save_action'.
  $permissions['execute node_save_action'] = array(
    'name' => 'execute node_save_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpromote_action'.
  $permissions['execute node_unpromote_action'] = array(
    'name' => 'execute node_unpromote_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_action'.
  $permissions['execute node_unpublish_action'] = array(
    'name' => 'execute node_unpublish_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_by_keyword_action'.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
    'name' => 'execute node_unpublish_by_keyword_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_block_ip_action'.
  $permissions['execute system_block_ip_action'] = array(
    'name' => 'execute system_block_ip_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_goto_action'.
  $permissions['execute system_goto_action'] = array(
    'name' => 'execute system_goto_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_message_action'.
  $permissions['execute system_message_action'] = array(
    'name' => 'execute system_message_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_send_email_action'.
  $permissions['execute system_send_email_action'] = array(
    'name' => 'execute system_send_email_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute user_block_user_action'.
  $permissions['execute user_block_user_action'] = array(
    'name' => 'execute user_block_user_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute user_unblock_user_action'.
  $permissions['execute user_unblock_user_action'] = array(
    'name' => 'execute user_unblock_user_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_archive_action'.
  $permissions['execute views_bulk_operations_archive_action'] = array(
    'name' => 'execute views_bulk_operations_archive_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_argument_selector_action'.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
    'name' => 'execute views_bulk_operations_argument_selector_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_change_owner_action'.
  $permissions['execute views_bulk_operations_change_owner_action'] = array(
    'name' => 'execute views_bulk_operations_change_owner_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_item'.
  $permissions['execute views_bulk_operations_delete_item'] = array(
    'name' => 'execute views_bulk_operations_delete_item',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_revision'.
  $permissions['execute views_bulk_operations_delete_revision'] = array(
    'name' => 'execute views_bulk_operations_delete_revision',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_modify_action'.
  $permissions['execute views_bulk_operations_modify_action'] = array(
    'name' => 'execute views_bulk_operations_modify_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_move_to_book_action'.
  $permissions['execute views_bulk_operations_move_to_book_action'] = array(
    'name' => 'execute views_bulk_operations_move_to_book_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_remove_from_book_action'.
  $permissions['execute views_bulk_operations_remove_from_book_action'] = array(
    'name' => 'execute views_bulk_operations_remove_from_book_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_script_action'.
  $permissions['execute views_bulk_operations_script_action'] = array(
    'name' => 'execute views_bulk_operations_script_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_cancel_action'.
  $permissions['execute views_bulk_operations_user_cancel_action'] = array(
    'name' => 'execute views_bulk_operations_user_cancel_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_roles_action'.
  $permissions['execute views_bulk_operations_user_roles_action'] = array(
    'name' => 'execute views_bulk_operations_user_roles_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'root' => 'root',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'retry failed tasks'.
  $permissions['retry failed tasks'] = array(
    'name' => 'retry failed tasks',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'root' => 'root',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'update status of tasks'.
  $permissions['update status of tasks'] = array(
    'name' => 'update status of tasks',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'admin' => 'admin',
      'root' => 'root',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view client'.
  $permissions['view client'] = array(
    'name' => 'view client',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_client',
  );

  // Exported permission: 'view locked platforms'.
  $permissions['view locked platforms'] = array(
    'name' => 'view locked platforms',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'view own tasks'.
  $permissions['view own tasks'] = array(
    'name' => 'view own tasks',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view package'.
  $permissions['view package'] = array(
    'name' => 'view package',
    'roles' => array(
      'admin' => 'admin',
      'aegir account manager' => 'aegir account manager',
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'hosting_package',
  );

  // Exported permission: 'view platform'.
  $permissions['view platform'] = array(
    'name' => 'view platform',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir platform manager' => 'aegir platform manager',
      'root' => 'root',
    ),
    'module' => 'hosting_platform',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'aegir administrator' => 'aegir administrator',
      'aegir client' => 'aegir client',
      'aegir platform manager' => 'aegir platform manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view server'.
  $permissions['view server'] = array(
    'name' => 'view server',
    'roles' => array(),
    'module' => 'hosting_server',
  );

  // Exported permission: 'view site'.
  $permissions['view site'] = array(
    'name' => 'view site',
    'roles' => array(
      'admin' => 'admin',
      'administrator' => 'administrator',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_site',
  );

  // Exported permission: 'view task'.
  $permissions['view task'] = array(
    'name' => 'view task',
    'roles' => array(
      'admin' => 'admin',
      'aegir client' => 'aegir client',
      'root' => 'root',
    ),
    'module' => 'hosting_task',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'system',
  );

  return $permissions;
}
