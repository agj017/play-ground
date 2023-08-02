package com.example.jpa;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import java.util.Objects;
import java.util.UUID;

@Entity
public class Account {

    @Id
    @Column(columnDefinition = "binary(16)")
    public UUID id;
    public UUID organizationId;

    public String name;

    public Account() {
        id = UUID.randomUUID();
    }

    public Account(UUID id, UUID organizationId, String name) {
        this.id = id;
        this.organizationId = organizationId;
        this.name = name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Account account = (Account) o;
        return Objects.equals(id, account.id) && Objects.equals(organizationId, account.organizationId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, organizationId);
    }
}