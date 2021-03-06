<?php
/**
 * @file
 * ma_importexport_users.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ma_importexport_users_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_categories';
  $feeds_importer->config = array(
    'name' => 'Import Categories',
    'description' => 'Import Categories into Mukurtu',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'category',
        'force_update' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Term name',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Term description',
            'target' => 'description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_categories'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_communities';
  $feeds_importer->config = array(
    'name' => 'Import Communities',
    'description' => 'Import Communities into Mukurtu',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'community',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Sharing Protocols',
            'target' => 'group_access',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Media',
            'target' => 'field_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Media Internet',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          8 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_communities'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_cultural_protocols';
  $feeds_importer->config = array(
    'name' => 'Import Cultural Protocols',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'cultural_protocol_group',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Sharing Protocols',
            'target' => 'group_access',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Media',
            'target' => 'field_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Media Internet',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          8 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_cultural_protocols'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_users';
  $feeds_importer->config = array(
    'name' => 'Import Users',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          7 => 0,
          6 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'E-mail',
            'target' => 'mail',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'Created date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Cultural Protocols',
            'target' => 'field_culturalprotocol:title:duplicates',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Community Affiliations',
            'target' => 'field_communities:title:duplicates',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 1,
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['import_users'] = $feeds_importer;

  return $export;
}
