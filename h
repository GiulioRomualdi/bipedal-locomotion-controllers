[33mcommit f4092bffade28a65cdfb92327ed288aec0e21634[m[33m ([m[1;36mHEAD -> [m[1;32mfeature/implement_contact_models[m[33m)[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 27 18:35:51 2020 +0100

    The flags defined in ContactModel class are not used in the child class anymore

[33mcommit 604dd35287305ad465081969253fc224b4006f65[m[33m ([m[1;31mgiulioFork/feature/implement_contact_models[m[33m)[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Mar 25 13:26:22 2020 +0100

    Update the ContactModels tests accordingly to 7a64ab0605ad7d7383b02f33dcd2ce0f66c2f30c

[33mcommit 7a64ab0605ad7d7383b02f33dcd2ce0f66c2f30c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Mar 25 13:25:36 2020 +0100

    Update the interface of the ContactModel library accordingly to 01d406c794e872a75eb967e3fd7f5236761cf955

[33mcommit 7044d409116da12dd06639075b995087bcaa62ae[m
Merge: c68d264 01d406c
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Mar 25 11:24:17 2020 +0100

    Merge branch 'master' into feature/implement_contact_models

[33mcommit 01d406c794e872a75eb967e3fd7f5236761cf955[m
Merge: 01edf9b 1c05d43
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 15:10:33 2020 +0100

    Merge pull request #28 from dic-iit/feature/improve_parameter_handler
    
    Avoid to use CRTP in ParameterHanlder component

[33mcommit 1c05d43b0637cd600f588177c341f58c89ddeef6[m[33m ([m[1;31morigin/feature/improve_parameter_handler[m[33m, [m[1;32mfeature/improve_parameter_handler[m[33m)[m
Merge: 4d4c088 01edf9b
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 14:36:44 2020 +0100

    Merge branch 'master' into feature/improve_parameter_handler

[33mcommit 01edf9b805915d2e4e418d20bf41befe9d692538[m
Merge: 47101e0 8254136
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 14:36:00 2020 +0100

    Merge pull request #32 from GiulioRomualdi/fix/ci_windows
    
    Add cache GitHub Action to cache dependency compiled from source

[33mcommit 8254136a8230ad88dc1784c550aef35a0a6660f4[m[33m ([m[1;31mgiulioFork/fix/ci_windows[m[33m, [m[1;32mfix/ci_windows[m[33m)[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 14:29:34 2020 +0100

    Add fail-fast strategy to C++CI workflow

[33mcommit 9af55b84d3365824a7ba9371804f8e74fcccacef[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 13:30:23 2020 +0100

    Update the Path adding the custom vcpkg installation in CI Windows

[33mcommit 115643cdac1c2d15e270db527d7a07e3604496f3[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 12:39:51 2020 +0100

    Switch to use particular commit for vcpkg, YCM, YARP and ICUB catch2 used for testing

[33mcommit 2598d811b4f4cb8f31d3ae19287f7a0681ab3b2f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 18:43:51 2020 +0100

    Use precompiled version of vcpkg in Windows CI

[33mcommit 4d4c08835c59c74ca716c7f3a3670fa10005a4d7[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 24 12:06:02 2020 +0100

    Avoid explicit downcasting in ParametersHandlerYarpTest.cpp

[33mcommit 3ee5e59c0906992c465d17d1afb8a451e6797783[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 18:20:39 2020 +0100

    Fix ParametersHandlerTest.cpp following @S-Dafarra suggestions

[33mcommit bf7e67e5b0145e76983c4e3d6edf83e0c544646f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 18:16:54 2020 +0100

    Move the is_string utility from IParametersHandler.h to TemplateHelpers.h

[33mcommit a75238a837125c818b7ba5bee13c481d9b9d4c8c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 16:11:26 2020 +0100

    Update the ParametersHandlerTest.cpp accordingly to the latest version of the IParameteHandler interface

[33mcommit ca572ece46b8474c60cfece37654ea4c9050c338[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 13:22:52 2020 +0100

    Update the ParametersHandlerYarpTest.cpp test

[33mcommit 2c268d087b0645234e44d8ea962d459616ad88d1[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 13:22:32 2020 +0100

    Update The YarpImplementation of ParameterHandler accordingly to 12572e786b76c6153960463bef410c84bb2dbe6b

[33mcommit 12572e786b76c6153960463bef410c84bb2dbe6b[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 13:21:34 2020 +0100

    Implement a template version of setParameter and getParameter in IParameterHandler interface

[33mcommit ccde4ebde5701d178e754b6a5d747c090e4a8b8e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Mar 21 17:21:09 2020 +0100

    Update the tests/ParametersHandlerYarpTest.cpp

[33mcommit 2e1d7d555a346c46e9a644e060d3ae43512099e9[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Mar 21 17:20:47 2020 +0100

    Update the YarpImplementation accordingly to IParameterHandler interface

[33mcommit 75c838c734ccccdc15b0b0fffbac50e5a92efa8c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Mar 21 17:16:26 2020 +0100

    Use the GenericContainer in IParameterHanlder interface

[33mcommit a943b2073de550bcec54fd0b9f93925838cd9601[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Mar 21 17:12:24 2020 +0100

    Link the GenericContainer to ParametersHandler library

[33mcommit fb0804a391de5eefb4484d180f7f96c9a6dfe190[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Mar 21 17:11:39 2020 +0100

    Avoid to compile the ParametersHandlerTest.cpp test

[33mcommit 6f505b20e49c5fc260842da3e155b46239119059[m
Merge: 21d5ed9 47101e0
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 12:11:38 2020 +0100

    Merge branch 'master' into feature/improve_parameter_handler

[33mcommit 47101e05ec213c92c6549ca1f7a88fba7b8565ed[m
Merge: e055599 ebba18a
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Mar 23 11:37:49 2020 +0100

    Merge pull request #29 from S-Dafarra/feature/genericContainer
    
    Add generic container

[33mcommit ebba18a76824a4126cbdee5c4ec65e098438f4d3[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Sun Mar 22 14:00:12 2020 +0100

    Added documentation of GenericContainer::Vector.

[33mcommit 9c2764f101d8b64832ef993ebd9e0e633f1b2651[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Sat Mar 21 18:57:55 2020 +0100

    Added an utility to detect if the generic vector is constructible and static asserts if used with vector<bool>
    
    I know, I should have written documentation, but this was more fun :)

[33mcommit 02eb1c3ab47360aa44d32e42d7ab92bec4ad4744[m[33m ([m[1;31mstefanoFork/feature/genericContainer[m[33m, [m[1;32mfeature/genericContainer[m[33m)[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 20:57:22 2020 +0100

    Added utility to get a shared pointer to a generic vector.

[33mcommit 1a4c0fd1ba0b6ee13e880f0310e97e16abea440d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 20 18:46:15 2020 +0100

    Fix GenericContainerTest compilation on Windows

[33mcommit 0ee2c348280aa868192088c9c3943a15b02e0c06[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 18:52:01 2020 +0100

    All tests involving an iterator are first saved in a bool.

[33mcommit 53df609031524870678cd9699a187409060834a6[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 17:39:34 2020 +0100

    Yet another attempt to fix the compilation issue involving reverse iterators and catch.

[33mcommit d49f4dbd94823fd58eba417673af21dffa191d08[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 16:44:53 2020 +0100

    Trying to cast to bool exxpressions using reverse iterator in the Generic vector test.

[33mcommit 1a117600b0ae7245a88ab716c719101fa2161db5[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 14:58:16 2020 +0100

    Make sure GenericContainer::Vector works also with arrays and itself.
    
    Fixed a bug on the resize method.
    Redefined void_t to avoid syntax highlighting issues.
    Added const version of iterators without the "c".

[33mcommit 6bea0ccfe36aa1aa1005ebf893b2b4815d6f956e[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 11:22:18 2020 +0100

    Add case in YarpUtilies to use GenericContainer::Vector.

[33mcommit 2fd26da1dcaac5814f255c8e7d2ba2cea0dcae15[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 11:03:54 2020 +0100

    New name and file structure.

[33mcommit a2ca9830088ebd484c2ee051fffa574dd05944f9[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Mar 20 09:43:07 2020 +0100

    Better handling of const. Resize returns void.

[33mcommit bf357c86c58b1bcf7e706203645bc92550537515[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Mar 19 15:26:00 2020 +0100

    Added test with GenericVector for yarp vectors.

[33mcommit f0af7b2e43362f0c4a319e1f182af4060c99afea[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Mar 19 15:20:32 2020 +0100

    Forgot to add new file.

[33mcommit 147d60ad7e4c922ba27299953e5827959d3f6cdd[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Mar 19 14:58:56 2020 +0100

    Added functions to build a GenericContainer even if the span is not directly constructable.
    
    Moved template helpers to a separate file.

[33mcommit 36126cab8b261b5ae6a348a95233ba8abaade9ea[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Mar 19 00:27:08 2020 +0100

    Forgot return value of size() in GenericContainer.

[33mcommit ed4ce0e68d00e994aadfb44cc9fd93c49a91ce9c[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Mar 19 00:15:55 2020 +0100

    Removed copy constructor to avoid confusion.
    
    What am I supposed to copy?

[33mcommit 36c59819fa67fd7a19e6588f8e83cdd89dc19c5a[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Wed Mar 18 23:54:26 2020 +0100

    Added generic container.

[33mcommit 21d5ed943bfbe7b364896ede6487ea634800cd11[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 20:24:34 2020 +0100

    Handle casting problems in setGroup() in ParameterHanlder library

[33mcommit b9e043d41456629b7be2a5b9fabab29af781a11e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 19:43:24 2020 +0100

    Avoid to use dynamic_pointer_cast inside YarpImplementation::setGroup() method

[33mcommit 72ff65de7f1c8a76d00716f53c3e87f1a96eab82[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 17:35:08 2020 +0100

    Update ParametersHandlerTest.cpp accordingly to 663862e87dfeeb4b46a8b6c5681a4d43d27a3097

[33mcommit 3eeb7f0f794202eb74fa582c850f25214c6ca9f3[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 17:34:46 2020 +0100

    Update ParametersHandlerYarpTest.cpp accordingly to 663862e87dfeeb4b46a8b6c5681a4d43d27a3097

[33mcommit 9d4e0aaa761c3d665dbce21449c9960ca86c3921[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 17:33:48 2020 +0100

    Update YarpImplementation of ParameterHandler accordingly to 663862e87dfeeb4b46a8b6c5681a4d43d27a3097

[33mcommit 663862e87dfeeb4b46a8b6c5681a4d43d27a3097[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 17:32:38 2020 +0100

    Refactor the IParameterHandler interface

[33mcommit 2a84e159656f8b6ad09910f01b6c5e2ad5fd7d04[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Mar 17 17:18:40 2020 +0100

    Add the possibility to link libraries in the interface libraries

[33mcommit c68d26447750a8985804c92ed9640cac40556da9[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 15:12:37 2020 +0100

    Fix typos in ContactModels library
    
    Co-Authored-By: Stefano Dafarra <stefano.dafarra@gmail.com>

[33mcommit 089bce74224f3dc736bc984651332dfa1ef37b5b[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 15:01:25 2020 +0100

    Fix documentation in ContactModel.h

[33mcommit 430db97a3be33621074ccc0aecd220a890759173[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 14:59:12 2020 +0100

    Fix typo in ContatModel library

[33mcommit db6e50cd6a64759c3f67397606aedcedb4a43f08[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 14:53:29 2020 +0100

    Improve documentation in ContinuousContactModel.h

[33mcommit 9d9c1c3f65001bab15385997ba62ffb76303aac5[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 14:47:27 2020 +0100

    Avoid to use exception fro propagating errors in ContactModels library

[33mcommit 0c04bfe85e095b93813d663cb4a8dfbcd14d2d37[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 13:37:08 2020 +0100

    Avoid to set the CMake standard version in the main CMakeLists file

[33mcommit 084b7fd9a45e0cdd9beafc50fca07119e0b71840[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 13:36:29 2020 +0100

    Update the main CMakeLists.txt file of the ConotactModel library accordingly to e055599aa3cbe6bc3f4976a53c358694a5c0970a

[33mcommit b98eeaeb3f9a2085a6e3a09700570b1ed711733e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 13:35:19 2020 +0100

    Update the test CMakeLists.txt file in ContactModels library accordingly to the new standard

[33mcommit 035f06f88433ac447237dfa3e90edda7f48f6ee2[m
Merge: 8da427d e055599
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Mar 13 13:22:18 2020 +0100

    Merge remote-tracking branch 'origin/master' into feature/implement_contact_models

[33mcommit e055599aa3cbe6bc3f4976a53c358694a5c0970a[m
Merge: 6de9199 9ed423d
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Mar 12 12:39:33 2020 +0100

    Merge pull request #25 from dic-iit/feature/cmake_improvements
    
    Add a custom cmake function for enhancing the components compilation

[33mcommit 9ed423dd97ea78f3db228a6b5be55628d9c1a47b[m[33m ([m[1;31morigin/feature/cmake_improvements[m[33m, [m[1;32mfeature/cmake_improvements[m[33m)[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Mar 11 18:58:13 2020 +0100

    Use add_bipedal_component in the existing components

[33mcommit ee9ec3ee4047fffbff4a6e1d2aa50190301a6acb[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Mar 11 18:57:18 2020 +0100

    Implement add_bipedal_component in cmake/AddBipedalLocomotionControllersComponent.cmake file

[33mcommit 6de919977c2c3cb210dcd7f97039acf64c176c28[m
Merge: 0d66007 94342ca
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 29 19:55:04 2020 +0100

    Merge pull request #22 from dic-iit/GiulioRomualdi-doxygen
    
    Enable automatic Doxygen documentation generation

[33mcommit 94342ca73c03196bef47f130d2bf40046b0bf915[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 29 18:57:39 2020 +0100

    Enable automatic Doxygen documentation

[33mcommit 0d66007d2759383951781f4f2c4bafe9889a228f[m
Merge: 31c84e5 4815ba8
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 28 15:39:27 2020 +0100

    Merge pull request #19 from S-Dafarra/feature/valgrind
    
    Added valgrind tests.

[33mcommit 4815ba8b8e83f7e56c29c8f95163a30ca9d4254d[m[33m ([m[1;31mstefanoFork/feature/valgrind[m[33m)[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 28 15:10:40 2020 +0100

    Avoid trying to install valgrind on macOs.

[33mcommit 31c84e550b10492033513151a9b7d915b338c66b[m
Merge: ba8d63a 0c9c610
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 28 14:27:24 2020 +0100

    Merge pull request #21 from S-Dafarra/fix/parametersHandler
    
    Fix missing fields when parsing config files

[33mcommit b70bb945531e8c7fa050d5754f0b601d06422479[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 28 14:27:12 2020 +0100

    Moving the compilation of CatchMain later in the CMakeLists.txt
    
    Trying adding valgrind to Ubuntu CI.

[33mcommit 0c9c610a83d97d3061fc146fc1961b5ff3a1fa2a[m[33m ([m[1;31mstefanoFork/fix/parametersHandler[m[33m)[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 28 13:57:09 2020 +0100

    Fix missing fields when parsing config files. Added test cases.

[33mcommit 1bbda012bbb50ac51c08a3669ad8c9a6c54a8162[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 28 13:38:35 2020 +0100

    Added function to add tests quickly.

[33mcommit 4b7fa6844d2bf90d7ae98807d97a69fb2575bfad[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 12:00:16 2020 +0100

    Added valgrind tests.

[33mcommit ba8d63a9c79e4a2e797a3aab0e94761b29dc4e3a[m
Merge: 079f5e7 b2197cd
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 28 11:42:04 2020 +0100

    Merge pull request #18 from S-Dafarra/feature/make_unique
    
    Small refactoring of ParametersHandler. Close #20

[33mcommit b2197cdec17cc3c5454bfbb93961c5951f837111[m[33m ([m[1;31mstefanoFork/feature/make_unique[m[33m)[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 28 09:41:04 2020 +0100

    Fixed documentation about getGroup.

[33mcommit 3af45e1f0e0e282cd7b3ba9027aba9c0d5f47e0f[m
Author: Stefano Dafarra <stefano.dafarra@gmail.com>
Date:   Thu Feb 27 07:22:38 2020 -0400

    Apply suggestions from code review
    
    Co-Authored-By: Giulio Romualdi <giulio.romualdi@gmail.com>

[33mcommit 22becf3e599d7ee3f6f451de4c782ad6cdb37f6d[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Thu Feb 27 08:52:51 2020 +0100

    When setting a parameter with the same name, the previous value was not overwritten.

[33mcommit 503d854fcdc522f2964692a393c419d147a7e241[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Wed Feb 26 20:01:26 2020 +0100

    Improved yarp implementation test.

[33mcommit 06daedd98f47bf9e366f02c44c0ba2f312e0eb55[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Wed Feb 26 12:12:57 2020 +0100

    Added clear method.

[33mcommit fb02010d429abd80b542cce405f83dbf9177fc3f[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Wed Feb 26 12:03:02 2020 +0100

    Added the possibility to set groups and to get a shared ptr to them to ease modifications.

[33mcommit 7c476c347299207f7b6dad2978def44bba61b8c6[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Tue Feb 25 11:01:09 2020 +0100

    The getGroup returns a weak_ptr.

[33mcommit 712da669e044b20a1acebc6d31c0fa4722f6fad4[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 12:07:30 2020 +0100

    Using the set method in the YarpImplementation constructor.

[33mcommit 221cdf76bba24a318f5a80dc258d251f4dc2dc26[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 11:38:50 2020 +0100

    In parameter handler, the unique_ptr points again to the base class.

[33mcommit 375961004afa3463961dbf4786c2e2e39fe6c1c4[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 11:20:36 2020 +0100

    Added "set" in parameter handler test.

[33mcommit 56c40062dcc683048da47e204d2dd6210780cd4e[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 10:50:58 2020 +0100

    Added make_unique static function to the parameters handler.

[33mcommit 8a09be913f1079f683bac7783256b403b12cf13c[m
Author: Stefano <stefano.dafarra@gmail.com>
Date:   Fri Feb 21 10:32:57 2020 +0100

    Added set method in the IParametersHandler class.

[33mcommit 079f5e7052e9b8806f67d8a91499c1e45c09ed07[m
Merge: 5c6a94e 563796d
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 20 15:06:16 2020 +0100

    Merge pull request #17 from GiulioRomualdi/fature/is_empty
    
    Implement isEmpty() method in ParameterHandler library

[33mcommit 563796d759b7f54eef4bfc8cfb4545e900869f42[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 20 14:36:36 2020 +0100

    Fix typos in ParameterHandler library
    
    Co-Authored-By: Stefano Dafarra <stefano.dafarra@gmail.com>

[33mcommit 22c2d32a27166872911e94009f174ceddd28cd67[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 20 14:26:59 2020 +0100

    Test the isEmpty() method in ParametersHandlerTests

[33mcommit 8346350f5dfaa50c4fdd3449d98ae2dd015fbe72[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 20 14:25:33 2020 +0100

    Implement isEmpty() method in ParametersHandlerYarpImplementation library

[33mcommit 7aa461bbb74c980a527997ee9259abaeafd42df4[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 20 14:25:08 2020 +0100

    Implement isEmpty() method in ParametersHandler library

[33mcommit 5c6a94eb3c012052c15f1bc020f8463d0bca410a[m[33m ([m[1;31mstefanoFork/master[m[33m)[m
Merge: 9fe4879 74bdb96
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 17:20:37 2020 +0100

    Merge pull request #13 from dic-iit/feature/parameters_handler
    
    Implement ParametersHandler library

[33mcommit 74bdb96f5ad56aa48695b24c9b504295e3f11a25[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 16:47:29 2020 +0100

    Update the CHANGELOG.md

[33mcommit 987775d4217f2cd1dcc3951b6453b1c7526b44d2[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 16:42:48 2020 +0100

    Test printing function in ParametersHandlerTest.cpp

[33mcommit d52881f2972aca2b8d13d92411cf82e56a658de2[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 16:41:54 2020 +0100

    Use operator[] in setParameter function in ParametersHandlerTest

[33mcommit 3c2323359625845b1e23ab34084a456fbfd3dece[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 16:41:20 2020 +0100

    Improve documentation in ParametersHandler library

[33mcommit 7c70533ca431706b4fd7b99847a9981ee3fc80e5[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Feb 10 16:40:24 2020 +0100

    Implemented toString() method in ParametersHandler library

[33mcommit 8d7ae3039e6805c216afda5449e0364abbedaae5[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sun Feb 9 10:18:23 2020 +0100

    Fix typo in CMakeLists.txt file of ParametersHandler YarpImplementation

[33mcommit 02efab5a4e87cb74771fd4b91c6c0e71347a2468[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 20:08:31 2020 +0100

    Add unique_ptr public alias in IParametersHandler class

[33mcommit 729ca1eaf621f983ae349ad0b72d82aa38ea3b9d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 19:50:15 2020 +0100

    Add Destructors in ParametersHandler library

[33mcommit 6f2e2595d3597bea17674740f2f78db8d7e80783[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 19:25:07 2020 +0100

    Avoid forcing to compile ParametersHandlerYarpImplementation library as shared library

[33mcommit e07dd3ca0bb3ded876882cbc657eb35ae5f9882d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 20:19:57 2020 +0100

    Update the ParametersHandlerYarpTest in ParametersHandler library

[33mcommit 33c7d1641d66a7fa7917939383128f898cf14a2d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 20:12:28 2020 +0100

    Update ParametersHandlerTest.cpp

[33mcommit ac4743278d55d99a644d0361f356f5768254f343[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 20:12:14 2020 +0100

    Update ParametersHandlerYarpTest.cpp file

[33mcommit 89b179fb402f99e42af72c3b8d7b892f29dfb477[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 20:10:10 2020 +0100

    - Use yarp::os::Property instead of yarp::os::Searchable in ParametersHandler::YarpImplementation
    - Implement YarpImplementation::setParameter() function

[33mcommit c97ba90b53c38bbddbe6c773812c2ffb0a43cb62[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 20:09:33 2020 +0100

    Add setParameter() method in IParametersHandler class

[33mcommit 302cdf4d5363c2d778606f2d85fb27a75f2c6cf6[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 17:22:07 2020 +0100

    Implement simple test for parameters handler library

[33mcommit 8848762dbc1d7bdc865c454762c10a2504e59625[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 17:21:25 2020 +0100

    Fix Typos in YarpImplementation/tests for the ParametersHandler library

[33mcommit 2cb0382ea39ed197d10b78e7b1bc0f25e7208360[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 15:03:24 2020 +0100

    FIx typo ParametesHandlerYarpTest.cpp
    
    Co-Authored-By: Silvio Traversaro <silvio.traversaro@iit.it>

[33mcommit c3996c6b79135518d74d36946ccad911a0e92c37[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 15:01:23 2020 +0100

    Bugfix in header installation in ParametersHandler library

[33mcommit 0b2face6b723149aadec0f30b3621a7066ac0954[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Feb 7 14:00:01 2020 +0100

    Overload operator<<() in ParametersHandler library

[33mcommit ca5a03746a6d0cf00d8189fd486460ebf1f41772[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 6 19:02:38 2020 +0100

    Update the README.md

[33mcommit 8102760ae6648ee093a7b2e3fdfe68dad816a4e5[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 6 18:58:58 2020 +0100

    Enable complitation of the ParameterHandler library

[33mcommit 5679bcb8cb81eaa8995ae829182e9bb1e3f6a12f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Feb 6 18:58:16 2020 +0100

    Implement the first vetsion of the ParametersHandler

[33mcommit 9fe48790ba94f017cc03ead8399b94d1fb154777[m
Merge: 723ed28 70e9c82
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 19:22:30 2020 +0100

    Merge pull request #15 from dic-iit/feature/static_shared_libraries
    
    Add the possibility to compile the library as static and shared

[33mcommit 70e9c821c5a4100a7011002980ec2bb42c32fe2c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 16:03:47 2020 +0100

    Add the possibility to compile the libraries as shaded and static

[33mcommit 21e536b5e0bc09c7b6ab9abef434c70a5d51c766[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Feb 8 16:01:30 2020 +0100

    Move the specialized version of getVectorFromSearchable from header file to source file in YarpUtilities library

[33mcommit 723ed28b5425e128ee1cd6636b63649f03db6e35[m
Merge: 49cc48c a4fe6da
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Feb 5 11:37:11 2020 +0100

    Merge pull request #12 from dic-iit/feature/YarpUtilities_fix_vectors
    
    Add the possibility to use YarpUtilities::getVectorFromSearchable() with fix sized vectors

[33mcommit a4fe6daafdac36df9d00f97ab173a722b744a6fc[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Feb 5 11:03:49 2020 +0100

    Add the possibility to use BipedalLocomotionControllers::YarpUtilities::getVectorFromSearchable() with fix sized vectors

[33mcommit 8da427d92912bdff2fd4c3cafaea1929d899f389[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 30 12:03:12 2020 +0100

    Bugfix in ContinousContactModelTest.cpp

[33mcommit 49cc48c92751613d72758a75331c92d7a47cf7a4[m
Merge: 9b7dcb3 0071304
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Jan 25 18:55:55 2020 +0100

    Merge pull request #10 from dic-iit/fix/github_ci
    
    Fix GitHub Actions CI by removing apt Microsoft repos

[33mcommit 0071304da666199c0f3525754298ad65070c1ad7[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sat Jan 25 15:19:33 2020 +0100

    Update ci.yml

[33mcommit cf5aae00b48e1921e959156f9d64427fb7bdccd2[m
Merge: 3df976e 9b7dcb3
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Jan 17 12:21:06 2020 +0100

    Merge remote-tracking branch 'origin/master' into feature/implement_contact_models

[33mcommit 9b7dcb3d66fe9066314cb01a41901ef2d2218e1a[m
Merge: 26ee199 2293641
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Jan 17 00:12:19 2020 +0100

    Merge pull request #4 from GiulioRomualdi/action/ci
    
    Add CI pipeline with Github Actions

[33mcommit 22936416613a8bc2e4a563d27196c88101958777[m[33m ([m[1;31mgiulioFork/action/ci[m[33m)[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 16 19:37:37 2020 +0100

    Add CI pipeline with Github Actions

[33mcommit 26ee19973d34950c06e70a6d86543bce0249f40e[m
Merge: 1b5df3a 33f8324
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Jan 15 09:13:53 2020 +0100

    Merge pull request #9 from dic-iit/revert-8-fix/iDynTree_version
    
    Revert "Update the iDynTree required version"

[33mcommit 33f832476ea63216bec6b8b23e46c61bb8ca9a03[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Jan 15 08:41:54 2020 +0100

    Revert "Update the iDynTree required version"

[33mcommit 1b5df3a3aed534378b623efe7e8498d91423a22b[m
Merge: 5fbb1a1 7f78be0
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Jan 14 20:13:44 2020 +0100

    Merge pull request #8 from GiulioRomualdi/fix/iDynTree_version
    
    Update the iDynTree required version

[33mcommit 7f78be0cc8532cc81244b76d0bee3b0b854a66bf[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Jan 14 19:01:59 2020 +0100

    Change the required version of iDynTree in README.md

[33mcommit 576f8ebfa91e782b1749f47c8e4212b74a77007f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Jan 14 19:01:04 2020 +0100

    Change the required version of iDynTree in BipedalLocomotionControllersFindDependencies.cmake

[33mcommit 5fbb1a163459630ab7d30b0e4e3f89148e4aab9e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Jan 14 13:48:06 2020 +0100

    Fix code documentation in YarpUtilities library

[33mcommit 9879a744091f4f0d1f0a3bce3226201ef49ad36c[m
Merge: 6481f6f 338e7ee
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 19:35:26 2020 +0100

    Merge pull request #5 from dic-iit/feature/YarpUtilities
    
    Implement Yarp Utilities library

[33mcommit 338e7eeafb89ee76f1814359c5c91edafdc3cac5[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 19:00:21 2020 +0100

    Update the badge C++14 badge to C++17 in the README.md

[33mcommit f0b4611da6207ae46a04f54f7769f637537109ca[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 18:28:27 2020 +0100

    - Introduce C++17 to use if constexpr in YarpUtilities::mergeSigVector function
    - Handle different type of std container in YarpUtilities::mergeSigVector

[33mcommit 9a39f23a9853928e685655fd61d436a60a89f8d2[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 16:00:16 2020 +0100

    Update the YarpUtilitiesTest considering scalar inputs

[33mcommit ca7d49be0af36a49d10d024fefc277eb649eae29[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 15:59:37 2020 +0100

    Undefine macro in YarpUtilities/Helper.tpp file

[33mcommit 2365718111c30836d904bfee5c1a388a31963e0c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 15:58:12 2020 +0100

    Use static_assert instead of runtime error unspecialized version of convertValue() in YarpUtilities library

[33mcommit a096bfb3a24009384231308d0ce20ced69160279[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 15:47:25 2020 +0100

    - Use operator[] to access the vectors element in mergeSigVector() function in YarpUtilities library (this will allow to use std container without template specialization)
    - Use SFINAE technique in mergeSigVector() function to handle both scalar and vector

[33mcommit 2bc1f2b480dc4f14e23860085b9413eff74bfc69[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 12:48:39 2020 +0100

    Squash addGroup(key) with findGroup(key) in
    YarpUtilities::addVectorOfStringToProperty function

[33mcommit 3a8e9a8d77720f68f113d9a37334a09cfc3aabb6[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 12:34:40 2020 +0100

    Implement test for mergeSigVector() method in YarpUtilities library

[33mcommit 53ed42d28f11de7e01895333e18d659f78b4bc03[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 12:34:03 2020 +0100

    Overload mergeSigVector() method in case of std::vector<T> in YarpUtilities library

[33mcommit 1b16718e70cc3fb6687c0cd6249ccdb6d97a2f49[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 12:00:07 2020 +0100

    Call mergeSigVector(yarp::sig::Vector& vector, const T& t) inside mergeSigVector(yarp::sig::Vector& vector, const T& t, const Args&... args)

[33mcommit 6cfdf5d1dbcbbb91c418cc94bf890731fc9df9bf[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 10:48:46 2020 +0100

    Move YARP_UTILITES_GET_ELEMENT_TYPE YARP_UTILITES_CHECK_ELEMENT_SUPPORT and
    YARP_UTILITES_GET_CHECKER_NAME macros from YarpUtilities/Helper.h in YarpUtilities/Helper.tpp

[33mcommit 3d5407ac63e68ce83e9e7acdab9428b3e73a895d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sun Dec 22 16:43:37 2019 +0100

    Fix typo in YarpUtilities/CMakeLists.txt

[33mcommit 5f2b343b5c257f58bc6c0375887b034a99186f84[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Dec 18 18:09:19 2019 +0100

    Update the README.md adding YarpUtilities informations

[33mcommit a03289b6788c54683cfd0c1384c645566dfd385f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Dec 18 17:55:11 2019 +0100

    Use a fixed seed in the YarpUtilitiesTest.cpp

[33mcommit c6a45cf8704dcc818b80fad037d854fb0258636f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Dec 16 14:32:25 2019 +0100

    Update the CHANGELOG.md

[33mcommit c86d2e9d851a4bd551c234453cbc4ad67ed69ff0[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Dec 16 14:29:17 2019 +0100

    Implement YarpUtilities tests

[33mcommit 8f991c8b4a253e92b20553d9216e65f11fe3a4b9[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Dec 16 14:28:13 2019 +0100

    Handle the tests in the main CMakeLists.txt file

[33mcommit eb47313e10e30474ebb4bda30fa283fcdbf99462[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Dec 16 14:27:55 2019 +0100

    Enable the compilation of YarpUtilities library

[33mcommit 5ac31e8050dabbc0ec365aae70a42656e57fbdfd[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Dec 16 14:24:18 2019 +0100

    Implement first version of the YarpUtilities library

[33mcommit 6481f6f56de97249308dc5edcb579d039f5c0703[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Mon Jan 13 00:08:04 2020 +0100

    Add the link to the documentation in the README.md

[33mcommit d0c72b20c2da84a5010a37348775fe5a6446f397[m
Merge: 16e8c65 108f79a
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sun Jan 12 23:00:53 2020 +0100

    Merge pull request #6 from GiulioRomualdi/feature/Implement_BipedalLocomotionControllers_interface
    
    Implement the BipedalLocomotionControllers interface

[33mcommit 3df976e367013c25a6058cf512e313c3d45f923c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sun Jan 12 22:40:56 2020 +0100

    Implement the test relared to the contact dynamics for the ContinousContactModel

[33mcommit 600fce8fa1f043973e2e2bf880871ada77ef7714[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Sun Jan 12 22:40:09 2020 +0100

    Implement computeControlMatrix() and computeAutonomousDynamics() in ContinuousContactModel

[33mcommit c7b2df6c97222414756a02a913c5d9a0fb56ab0e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 18:55:09 2020 +0100

    Implement the test for checking the Continuous contact model

[33mcommit 524fc57799347a49905dd6e54a0b20d9bb7c8a6a[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 18:54:33 2020 +0100

    Add skeleton for testing in BipedalLocomotionControllers

[33mcommit a741933f218d6f24b427390c7c63db71b125868d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 18:53:11 2020 +0100

    Implement the first version of the ContinuousContactModel in ContactModels library

[33mcommit 136de412cbc0f59d7581bf24e24d59265d31db49[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 19:00:21 2020 +0100

    Update the badge C++14 badge to C++17 in the README.md

[33mcommit 8fc08844009ab6dc49ca7270442fc63479923776[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 18:52:12 2020 +0100

    Require C++17 in the ContactModels library

[33mcommit 99a193d75f9e64fa478075fadadf23b262489843[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Jan 9 18:25:05 2020 +0100

    Introduce state and parameters in ContactModels library

[33mcommit a73eb50c6406857f16b212fd24bf7d85c1c50698[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Jan 8 16:57:58 2020 +0100

    Enable the ContactModels library compilation

[33mcommit 3f001098b471341584171cceb87bfc0b38dc4a5e[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Jan 8 16:57:03 2020 +0100

    Update the depenecies in order to compile the ContactModels library

[33mcommit b43900206bf2caa9d27f39efec02f0e467a64544[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Jan 8 16:56:16 2020 +0100

    - Implement the skeleton of the ContactModels library
    - Implement the first version ContactModel class

[33mcommit 108f79a68fb45204494a3f104e854f4b9c050b75[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Dec 27 18:58:32 2019 +0100

    Update the README.md

[33mcommit 392e6fd5dd6ad39d370d25e083ecf6ab44910c1d[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Dec 27 18:58:21 2019 +0100

    Update the CHANGELOG.md

[33mcommit 752502b3c3f5861fac6b60e000b8b5024834ebff[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Fri Dec 27 18:53:50 2019 +0100

    Implement the first version of the BipedalLocomotionControllers library

[33mcommit 16e8c650d22c5461c1071845b0362dfdec2f9969[m
Merge: 7834df4 a688052
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Dec 12 09:30:44 2019 +0100

    Merge pull request #1 from dic-iit/feature/add_library_skeleton
    
    Add cmake skeleton

[33mcommit a688052e7a40037e51a12c062234ab4593f13342[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Dec 12 09:27:28 2019 +0100

    Handling Windows compilation in CMakeLists.txt

[33mcommit 37c64e75812a7622f29bf20d77677dbfb5fed074[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Thu Dec 12 09:22:47 2019 +0100

    Add GNUInstallDirs in CMakeLists.txt

[33mcommit efca28d587b8263c45319105bc183a3feb687e9f[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Dec 11 22:47:41 2019 +0100

    Update README.md

[33mcommit 106b168f716e6ee56b7a1d685dd1abf8dd9e094c[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Wed Dec 11 21:44:32 2019 +0100

    Add CHANGELOG.md

[33mcommit 5ace23d2fc71f19444ba88dc03162cd43a6f1119[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Dec 10 18:34:35 2019 +0100

    Add .clang-format file

[33mcommit 86512143d8c3489f2ef1c15298d5b7e0b05130b2[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Dec 10 14:14:52 2019 +0100

    Add cmake skeleton

[33mcommit 7834df47316f6fa963dcbb3950b771d36f8c3d78[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Dec 10 14:13:26 2019 +0100

    Add .gitignore

[33mcommit 7d0f3a198f8e44d7243952a1ca637d7daed3b2fe[m
Author: Giulio Romualdi <giulio.romualdi@gmail.com>
Date:   Tue Dec 3 13:14:42 2019 +0100

    Add LGPL-3 license

[33mcommit 7f2d4bacdd981e0fb044a579a57c098458936b60[m
Author: Daniele Pucci <daniele.pucci85@gmail.com>
Date:   Thu Nov 28 19:07:35 2019 +0100

    Initial commit
