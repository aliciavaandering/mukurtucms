<?php
/**
 * @file
 * ma_scald.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_scald_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|audio|ma_colorbox';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'audio';
  $ds_fieldsetting->view_mode = 'ma_colorbox';
  $ds_fieldsetting->settings = array(
    'download_atom' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['scald_atom|audio|ma_colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|file|ma_scald_search_results';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'file';
  $ds_fieldsetting->view_mode = 'ma_scald_search_results';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['scald_atom|file|ma_scald_search_results'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|ma_colorbox';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'ma_colorbox';
  $ds_fieldsetting->settings = array(
    'download_atom' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['scald_atom|image|ma_colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|video|ma_colorbox';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'ma_colorbox';
  $ds_fieldsetting->settings = array(
    'download_atom' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['scald_atom|video|ma_colorbox'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_scald_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|audio|ma_colorbox';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'ma_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'og_group_ref',
        2 => 'download_atom',
        3 => 'scald_authors',
        4 => 'scald_tags',
        5 => 'group_scald_atom_metadata',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'download_atom' => 'ds_content',
      'scald_authors' => 'ds_content',
      'scald_tags' => 'ds_content',
      'group_scald_atom_metadata' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|audio|ma_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|audio|ma_scald_search_results';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'ma_scald_search_results';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|audio|ma_scald_search_results'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|file|ma_colorbox';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'file';
  $ds_layout->view_mode = 'ma_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'group_scald_atom_metadata',
        2 => 'og_group_ref',
        3 => 'scald_authors',
        4 => 'scald_tags',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'group_scald_atom_metadata' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'scald_authors' => 'ds_content',
      'scald_tags' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|file|ma_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|file|ma_scald_search_results';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'file';
  $ds_layout->view_mode = 'ma_scald_search_results';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'scald_thumbnail' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|file|ma_scald_search_results'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|default';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'scald_thumbnail',
        1 => 'scald_authors',
        2 => 'scald_tags',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'ds_content',
      'scald_authors' => 'ds_content',
      'scald_tags' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|ma_colorbox';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'ma_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'scald_thumbnail',
        1 => 'download_atom',
        2 => 'group_scald_atom_metadata',
        3 => 'og_group_ref',
        4 => 'field_scald_identifier',
        5 => 'field_original_dng',
        6 => 'field_archival_tiff',
        7 => 'field_full_size_jpeg',
        8 => 'field_scald_created',
        9 => 'field_scald_creator',
        10 => 'scald_authors',
        11 => 'field_scald_headline',
        12 => 'field_scald_description',
        13 => 'scald_tags',
        14 => 'field_scald_geo_location',
        15 => 'field_scald_location',
        16 => 'field_rights',
        17 => 'field_licence_std_cc',
        18 => 'field_category',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'ds_content',
      'download_atom' => 'ds_content',
      'group_scald_atom_metadata' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_scald_identifier' => 'ds_content',
      'field_original_dng' => 'ds_content',
      'field_archival_tiff' => 'ds_content',
      'field_full_size_jpeg' => 'ds_content',
      'field_scald_created' => 'ds_content',
      'field_scald_creator' => 'ds_content',
      'scald_authors' => 'ds_content',
      'field_scald_headline' => 'ds_content',
      'field_scald_description' => 'ds_content',
      'scald_tags' => 'ds_content',
      'field_scald_geo_location' => 'ds_content',
      'field_scald_location' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_licence_std_cc' => 'ds_content',
      'field_category' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|ma_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|ma_scald_search_results';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'ma_scald_search_results';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|ma_scald_search_results'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|default';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'download_atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'download_atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|ma_colorbox';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'ma_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'og_group_ref',
        2 => 'download_atom',
        3 => 'scald_authors',
        4 => 'scald_tags',
        5 => 'group_scald_atom_metadata',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'download_atom' => 'ds_content',
      'scald_authors' => 'ds_content',
      'scald_tags' => 'ds_content',
      'group_scald_atom_metadata' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|video|ma_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|ma_scald_search_results';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'ma_scald_search_results';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
        1 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
      'scald_thumbnail' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|video|ma_scald_search_results'] = $ds_layout;

  return $export;
}
