module.exports = function(grunt) {

  // Project configuration.
  grunt.initConfig({

    pkg: grunt.file.readJSON('package.json'),

    uglify: {
      options: {
        banner: '/*! verb <%= grunt.template.today("yyyy-mm-dd") %> */\n'
      },
      build: {
        files: {
          'build/js/verb.min.js': ['build/js/verb.js']
        }
      }
    },

    mochaTest: {
      test: {
        options: {
          reporter: 'spec',
          quiet: false // Optionally suppress output to standard out (defaults to false)
        },
        src: ['test/testCore.js', 'test/testGeom.js']
      }
    },

    benchmark: {
      all: {
        src: ['benchmark/*.js']
      }
    },

    haxe: {
        hxml: {
            hxml: 'buildjs.hxml'
        }
    }

  });

  grunt.loadNpmTasks('grunt-text-replace');
  grunt.loadNpmTasks('grunt-haxe');
  grunt.loadNpmTasks('grunt-mocha-test');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-benchmark');

  var build_steps = [ 'haxe', 'uglify' ];
  grunt.registerTask('default', ['haxe'] );

  grunt.registerTask('build', build_steps);
  grunt.registerTask('mocha', ['mochaTest']);
  grunt.registerTask('test', ['haxe', 'mochaTest']);
  grunt.registerTask('benchmarks', ['benchmark']);

};
