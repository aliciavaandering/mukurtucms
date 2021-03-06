<?php
/**
 * @file
 * ma_dashboard.features.inc
 */

/**
 * Implements hook_homebox().
 */
function ma_dashboard_homebox() {
  $homeboxes = array();

  $homeboxes['Mukurtu Dashboard'] = array(
    'regions' => 5,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'mukurtu_splash_manage_community' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'manage_community',
        'region' => 4,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -38,
      ),
      'mukurtu_splash_site_start' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'site_start',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -36,
      ),
      'node_recent' => array(
        'module' => 'node',
        'delta' => 'recent',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -38,
      ),
      'mukurtu_splash_manage_content' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'manage_content',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -35,
      ),
      'mukurtu_splash_site_config' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'site_config',
        'region' => 4,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -36,
      ),
      'mukurtu_splash_manage_taxonomy' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'manage_taxonomy',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -34,
      ),
      'mukurtu_splash_user' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'user',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -36,
      ),
      'mukurtu_splash_support' => array(
        'module' => 'mukurtu_splash',
        'delta' => 'support',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -35,
      ),
      'views_ma_recent_comments-block' => array(
        'module' => 'views',
        'delta' => 'ma_recent_comments-block',
        'region' => 4,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -37,
      ),
    ),
    'widths' => array(
      1 => 100,
      2 => 33,
      3 => 34,
      4 => 33,
      5 => 100,
    ),
    'title' => 'Mukurtu Dashboard',
    'path' => 'dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 1,
    'roles' => array(
      0 => 'administrator',
      1 => 'Curator',
      2 => 'Mukurtu Administrator',
    ),
  );


  return $homeboxes;
}
