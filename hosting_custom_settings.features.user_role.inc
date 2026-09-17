<?php

/**
 * @file
 * hosting_custom_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hosting_custom_settings_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 0,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 20,
  );

  // Exported role: aegir account manager.
  $roles['aegir account manager'] = array(
    'name' => 'aegir account manager',
    'weight' => 0,
  );

  // Exported role: aegir administrator.
  $roles['aegir administrator'] = array(
    'name' => 'aegir administrator',
    'weight' => 0,
  );

  // Exported role: aegir client.
  $roles['aegir client'] = array(
    'name' => 'aegir client',
    'weight' => 0,
  );

  // Exported role: aegir platform manager.
  $roles['aegir platform manager'] = array(
    'name' => 'aegir platform manager',
    'weight' => 0,
  );

  // Exported role: aegir site operator.
  $roles['aegir site operator'] = array(
    'name' => 'aegir site operator',
    'weight' => 0,
  );

  // Exported role: root.
  $roles['root'] = array(
    'name' => 'root',
    'weight' => 0,
  );

  return $roles;
}
