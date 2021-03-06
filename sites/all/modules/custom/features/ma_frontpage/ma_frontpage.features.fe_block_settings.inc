<?php
/**
 * @file
 * ma_frontpage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ma_frontpage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mukurtu_splash-mukurtu_wizard'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'mukurtu_wizard',
    'module' => 'mukurtu_splash',
    'node_types' => array(),
    'pages' => 'node/*/edit
node/add/*
dashboard*
dashboard',
    'roles' => array(),
    'themes' => array(
      'mukurtu_starter' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'mukurtu_starter',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
