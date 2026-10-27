namespace consts {
    constexpr int NUMBER_OF_CLASSES { 10 };
    constexpr int NUMBER_OF_STUDENTS_PER_CLASS { 30 };
}

int get_number_of_students_per_class() {
    return consts::NUMBER_OF_STUDENTS_PER_CLASS;
}

int get_number_of_classes() {
    return consts::NUMBER_OF_CLASSES;
}
